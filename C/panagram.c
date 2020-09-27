#include <stdio.h>
void main()
{
    char str[30];
    int i, k, j, count = 0;
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    for (i = 0; str[i] != '\0'; i++)
    {

        for (k = i - 1; k >= 0; k--)
        {
            if (str[i] == str[k])
            {
                i++;
                break;
            }
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count++;
            printf("%d", count);
        }
    }
    if (count == 26)
    {
        printf("panagram");
    }
    else
    {
        printf("not panagram");
    }
}
