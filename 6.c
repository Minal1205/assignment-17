#include <stdio.h>
#include <string.h>
// to reverse a string.
int main()
{
    char c[100];
    printf("Enter String\n");
    scanf("%s", c);
    for (int i = strlen(c)-1; i >= 0; i--)
    {
        printf("%c", c[i]);
    }
    return 0;
}