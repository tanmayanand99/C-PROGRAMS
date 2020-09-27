#include<stdio.h>
void main()
{
    int count=0,i;
    char str[100000];

    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            count++;
        }
    }
    printf("%d",count+1);
}