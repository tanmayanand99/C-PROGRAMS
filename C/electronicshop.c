#include<stdio.h>
int main()
{
    int b,n,m,k,i,j,arr[1000]={-1};
    scanf("%d %d %d",&b,&n,&m);

    int a[n],ar[m],max;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&ar[j]);
    }
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]+ar[j]<=b)
            {
                arr[k]=a[i]+ar[j];
                k++;
            }
            else
            {
                arr[k]=-1;
                k++;
            }
            
        }
    }
    for(k=0;k<m+n;k++)
    {
        printf("%d\t",arr[k]);
    }

    max=arr[0];
    for(k=0;k<m+n;k++)
    {
        if(arr[k]>max)
        {
            max=arr[k];
        }
    }
    printf("%d",max);
    return 0;
}