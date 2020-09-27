#include<stdio.h>
#include<string.h>
void repeat(char s[])
{
    int i,j,p;
    char character;

    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                character=s[i];
                goto p;
            }
        }
    }
    p:
    printf("First Recurring character is %c",character);
}
void main()
{
    char str[30];

    fgets(str,30,stdin);

    repeat(str);
}
