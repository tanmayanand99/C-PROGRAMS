#include<stdio.h>
void main()
{
    int n,i,count=0,sum=0,d,m,j;
    printf("enter n");
    scanf("%d",&n);

    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d %d",&d,&m);

    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=i;j<=m;j++)
        {
            sum=sum+a[j];
        
            if(a[j]!=m)
            {
                if(sum==d)
                {
                    count++;
                }
            }

        }
        printf("%d\t",sum);
        m++;
    }
    p:
    printf("\n");
    printf("%d",count);
}