#include<stdio.h>
int main()
{
    int count=0,count1=0,n,i,max;

    printf("enter n");
    scanf("%d",&n);

    int a[n];

    printf("score");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<max)
        {
            count++;
        }
        else if(a[i]>max)
        {
            max=a[i];
            count1++;
        }
    }
    printf("%d %d",count1,count);
}