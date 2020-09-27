#include<stdio.h>
void main()
{
    int n,i,a[30],max,count=0;
    printf("enter n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max=%d\n",max);

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(max==a[i]);
        {
            count++;
        }
    }

    printf("count=%d",count);
}