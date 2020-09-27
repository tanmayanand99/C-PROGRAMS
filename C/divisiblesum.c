#include<stdio.h>
void main()
{
    int n,k,i,j,sum=0,count=0;
    printf("enter n and k");
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(sum%k==0)
            {
                count++;
            }
            else
            {
                sum=0;
            }
        }
    }

    printf("%d",count);
}