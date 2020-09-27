#include<stdio.h>
#include<string.h>

void main()
{
    int count=0,i;
    char str[30];
    printf("enter string");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    printf("%d",count);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i])
    }
}