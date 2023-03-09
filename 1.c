#include <stdio.h>
//to calculate the length of the string.
int main()
{
    int count = 0;
    char c[] = "Hello world";
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length of string is %d\n", count);

    return 0;
}