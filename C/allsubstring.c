#include <stdio.h>
void main()
{
    int i, j;
    char str[30];

    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            printf("%c%c", str[i], str[j]);
            printf("\n");
        }
    }
}