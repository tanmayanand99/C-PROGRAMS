#include<stdio.h>
int main()
{
    int n,count=0,i,sum=0,d,m,p;

    printf("enter n");
    scanf("%d",&n);

    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d %d",&d,&m);

    int c=0;
    for(i=1;i<=n;i++)
    {
        c++;
    }
    if(c==1)
    {
        if(m==c)
        {
            if(a[1]==d)
            {
                count++;
            }
        }
        goto p;
    }

    for(i=1;i<=n;i++)
    {
        sum=sum+a[i];
        if(i%m==0)
        {
            if(sum==d)
            {
                count++;
            }
            else
            {
                sum=0;
            }
        }
    }
    sum=0;
   for(i=2;i<=n;i++)
    {
        sum=sum+a[i];
        if(i%m!=0)
        {
            if(sum==d)
            {
                count++;
            }
            else
            {
                sum=0;
            }
        }
    }
     p:
    
    printf("%d",count);

   
}