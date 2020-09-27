#include <stdio.h>
#include <string.h>
void main()
{
    int j = 0, i, count = 0;
    char str[50], str1[50];

    printf("enter string");
    gets(str);
    fflush(stdin);
    printf("enter substring");
    gets(str1);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str1[j])
        {
            j++;
            count++;
        }
        else
        {
            j = 0;
            count = 0;
        }
    }
    if (count == strlen(str1))
    {
        printf("substring is present");
    }
    else
    {
        printf("substring is not present");
    }
}
