#include <stdio.h>
#include <string.h>
void main()
{
    char str[50], str1[50];
    int i, j;
    gets(str);
    j = strlen(str);
    j = j - 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = str1[j];
        j--;
    }
    puts(str);
}