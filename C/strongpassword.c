#include<stdio.h>
#include<string.h>
void main()
{
    int count=0,n,i;
    char str[50];

    scanf("%d",&n);
    fflush(stdin);
    gets(str);
    
    if(n>=6)
    {
        for(i=0;str[i]!='\0';i++)
        {
           if (!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>=0 && str[i]<=9) || (str[i]=='!' && str[i]=='@' && str[i]=='#' && str[i]=='$' && str[i]=='%' && str[i]=='^' && str[i]=='&' && str[i]=='*' && str[i]=='(' && str[i]!=')' && str[i]=='-' && str[i]=='+')))
            {
                count++;
            }       
        }
        printf("%d",count);
    }
    else
    {
        n=6-n;
        printf("%d",n);
    }
    
}