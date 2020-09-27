#include <stdio.h>
void main()
{
    char str[40];
    int i, vowel = 0, space = 0, number = 0, consonant = 0;
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            number++;
        }
        else
        {
            consonant++;
        }
    }
    printf("vowel=%d,space=%d,number=%d,consonant=%d", vowel, space, number, consonant);
}