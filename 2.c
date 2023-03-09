#include <stdio.h>
// to count the occurrence of a given character in a given string.
int main()
{
    char c[100];
    int count = 0;
    printf("Enter String\n");
    gets(c);
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == 'a')
        {
            count++;
        }
    }
    printf("Number of times a present in string is %d\n", count);
    return 0;
}