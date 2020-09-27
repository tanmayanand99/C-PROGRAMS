#include<stdio.h>
int main() 
{
    char str[1000];
    int i,j,l,c=0,sum;
    gets(str);
    for(i=0;i<10;i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
           if(i==(str[j]-48))
            c++;
        }
        printf("%d ",c);
        c=0;
    }  
    return 0;
}