#include<stdio.h>
#include<string.h>
void main()
{
    int t,i,z;
    
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        int j,k,count=0,x=0,y=0,z=0;

        char a[100],b[100];
        scanf("%s",a);
        fflush(stdin);
        scanf("%s",b);

        for(j=0;a[j]!='\0';j++)
        {
            for(k=0;b[k]!='\0';k++)
            {
                if(a[j]==b[k])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            z=0;
            goto p;
        }
        x=strlen(a);
        y=strlen(b);       
        x=x-count;
        y=y-count;
        z=x+y;
        p:
        printf("%d",z);
    }
}