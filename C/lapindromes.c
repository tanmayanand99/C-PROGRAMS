#include<stdio.h>
#include<string.h>
int main(void)
{
    int t;
    char s[1000],p[1000];
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%s",s);
        p=strrev(s);
        if(s==p)
        {
            printf("YES\n");   
        }
        else
        {
            printf("NO\n");
        }
        t--;
    }
}