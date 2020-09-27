#include<stdio.h>
void main()
{
    int n,next,t,i;
    scanf("%d",&n);

    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>=38)
        {
            next=a[i]%5;
            if(next>=3)
            {
                t=5-next;
                a[i]=a[i]+t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}