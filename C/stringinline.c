#include<stdio.h>
void main()
{
    int i;
    char ch,str[30];
    printf("enter string");
    gets(str);

    ch='\n';

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str[i]=ch;
        }
    }

    puts(str);
}