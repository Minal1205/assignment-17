#include <stdio.h>
// to count the total number of alphabets, digits and special characters in a string.
int main()
{
    char c[100];
    int count1 = 0, count2 = 0, count3 = 0;
    printf("Enter String\n");
    gets(c);
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] >= 65 && c[i] <= 90 || c[i] >= 97 && c[i] <= 122)
        {
            count1++;
        }
        else if (c[i] >= 48 && c[i] <= 57)
        {
            count2++;
        }
        else if (c[i] >= 58 && c[i] <= 64 || c[i] >= 32 && c[i] <= 47)
        {
            count3++;
        }
    }
    printf("Number of alphabets=%d\n", count1);
    printf("Number of digits=%d\n", count2);
    printf("Number of special characters=%d\n", count3);
    return 0;
}