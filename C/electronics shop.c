#include<stdio.h>
int main()
{
    int b,n,m,large,i,j;

    scanf("%d %d %d",&b,&n,&m);
    int a[n],ar[m];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&ar[i]);
    }
    large=a[0]+ar[0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(((a[i]+ar[j])>large) && (b>(a[i]+ar[j])))
            {
                large=(a[i]+ar[j]);
            }
            else if((b<(a[i]+ar[j])))
            {
                large=-1;
            }
        }
    }

    printf("%d",large);
    return 0;
}