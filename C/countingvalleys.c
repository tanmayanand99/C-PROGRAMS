#include<stdio.h>
int main()
{
    int n,count=0,i,c=0;
    char str[100];
    scanf("%d",&n);
    
    
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='D')
        {
            count--;
        }
        else 
        {
            count++;
            if(count==0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}