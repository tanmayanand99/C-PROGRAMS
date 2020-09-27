#include<stdio.h>
int main()
{
    int n,k,i,b,sum=0,charge,tot;
    printf("enter n and k");
    scanf("%d %d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&b);

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    charge=sum-a[k];
    charge=charge/2;

    if(charge==b)
    {
        printf("Bon Appetit");
    }
    else
    {
        tot=b-charge;
        printf("%d",tot);  
    }  
    return 0;
}