#include <stdio.h>
#include <string.h>
int main()
{
    char c[100],temp;
    printf("Enter String\n");
    gets(c);
    for (int i = 0; i < strlen(c) - 1; i++)
    {
        for (int j = i + 1; j < strlen(c); j++)
        {
            if (c[i]>c[j])
            {
              temp=c[i];
              c[i]=c[j];
              c[j]=temp;
            }
        }
    }

    printf("%s", c);
    return 0;
}