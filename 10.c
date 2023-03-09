#include <stdio.h>
// program in C to Find the Frequency of Characters.
int main()
{
    char c[100], ch;
    int count = 0;
    printf("Enter String\n");
    gets(c);
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        count = 0;
        for (int i = 0; c[i] != '\0'; i++)
        {
            if (c[i] == ch)
            {
                count++;
            }
        }
        if (count > 0)
            printf("%c character comes %d times\n", ch, count);
    }

    return 0;
}