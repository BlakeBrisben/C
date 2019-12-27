#include <stdio.h>
#include <string.h>

int main()
{
    char* input[20];
    printf("Enter a word to be reversed: ");
    scanf("%s", &input); 


    printf("%d size\n", sizeof(input));
    int count = sizeof(input);

    printf("%s\n", input);


    while(input[count] == 0)
    {
        count--;
    }

    printf("count: %d\n", count);

    char* output[count];

    for(int i = 0; i < count; i++)
    {
        output[i] = input[count - i];
    }
    output[count-1] = '\0';

    printf("\n\nNew String: %s\n", output);

    return 0;
}

