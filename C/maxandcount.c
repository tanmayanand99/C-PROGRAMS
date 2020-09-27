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
        else if(max==a[i])
        {
            ++count;
        }
    }
    printf("%d\t",max);
    printf("%d",count);
}
