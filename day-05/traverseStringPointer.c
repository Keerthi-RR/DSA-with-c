// Traverse String Using Pointer 

#include <stdio.h>

int main()
{
    char str[] = "World";
    char *p = str;

    while (*p != '\0')
    {
        printf("%c ", *p);
        p++;
    }

    return 0;
}