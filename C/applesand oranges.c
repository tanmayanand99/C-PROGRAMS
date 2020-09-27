#include<stdio.h>
int main()
{
    int s,t,count=0,count1=0,a,b,m,n;
    printf("enter s and t");
    scanf("%d %d",&s,&t);

    scanf("%d %d",&a,&b);

    scanf("%d %d",&m,&n);

    int a1[m],a2[n],i,j;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&a2[j]);
    }
    for(i=0;i<m;i++)
    {
        a1[i]=a1[i]+a;
    }
    for(j=0;j<n;j++)
    {
        a2[j]=a2[j]+b;
    }
    for(i=0;i<m;i++)
    {
        if(a1[i]>=s && a1[i]<=t)
        {
            count++;
        }
    }
    for(j=0;j<n;j++)
    {
        if(a2[j]>=s && a2[j]<=t)
        {
            count1++;
        }
    }
    printf("%d %d",count,count1);
    
}