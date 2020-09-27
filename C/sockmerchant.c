#include<stdio.h>
void main()
{
    int n,i,j,sock,p,count=0,temp,sum=0;
    printf("enter n");
    scanf("%d",&n);

    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    sock=a[0];
    p:
    count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==sock)
        {
            count++;
        }
    }
    count=count/2;
    sum=sum+count;
    
    for(i=0;i<n;i++)
    {
        if(a[i]>sock)
        {
            sock=a[i];
            goto p;
        }
    }
    printf("%d\t",sum);
}