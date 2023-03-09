#include <stdio.h>
// to convert a given string into uppercase
int main()
{
    char c[100];
    printf("Enter String\n");
    gets(c);
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = c[i] - 32;
        }
    }
    printf("%s", c);

    return 0;
}