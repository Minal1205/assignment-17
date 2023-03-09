#include <stdio.h>
#include <string.h>

// to copy one string to another string.
int main()
{
    char c[100], b[100];
    int i;
    printf("Enter String\n");
    gets(c);
    for (i = 0; c[i] != '\0'; i++)
    {
        b[i] = c[i];
    }
    b[i] = '\0';
    printf("Copied string is \n");
    printf("%s", b);
    return 0;
}