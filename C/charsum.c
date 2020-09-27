#include<stdio.h>
void main()
{
    char s[10000];
    int i,sum=0,y;

    gets(s);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {   
            y=s[i]-97+1;
            sum=sum+y;
        }
    }
    printf("%d",sum);
}