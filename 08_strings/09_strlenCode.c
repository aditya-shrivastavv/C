/* write your own version of strlen function from <string.h> */
#include <stdio.h>

int string_length(char *pointer);

int main()
{
    char name[] = "Accenture";
    string_length(name);
    return 0;
}

int string_length(char *pointer)
{
    int count = 0;
    while (*pointer != '\0')
    {
        pointer++;
        count++;
    }
    printf("string length = %d", count);
}