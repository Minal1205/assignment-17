#include <stdio.h>
// to count vowels in a given string
int main()
{
    char c[100];
    int count = 0;
    printf("Enter String\n");
    gets(c);
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')

        {
            count++;
        }
    }
    printf("Number of vowels are %d\n", count);
    return 0;
}