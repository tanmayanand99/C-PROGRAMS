
#include<stdio.h>
int main()
{
    int n,i,j,diff,sum=0,sum1=0;

    scanf("%d",&n);

    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
        sum=sum+a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==2)
            {
                sum1=sum1+a[i][j];
            }
        }
    }

    diff=sum-sum1;

    if(diff<0)
    {
        diff=diff*(-1);
    }

    printf("%d",diff);

    return 0;
}
