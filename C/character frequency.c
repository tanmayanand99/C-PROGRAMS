#include <stdio.h>
void main()
{
    int count = 0, i, j, k;
    char str[30], str1[30];

    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for (k = i + 1; str[k]!='\0' ; k++)
        {
            if (str[i] == str[k])
            {
                count++;
                i++;
            }
        }

        for (j = strlen(str)-1; j>= 0; j--)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        printf("%c-%d\n", str[i], count);
    }
}