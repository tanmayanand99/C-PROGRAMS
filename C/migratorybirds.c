#include<stdio.h>
void main()
{
    int n,i,a[50],temp,arr[]={0},count=0,j,max;
    printf("enter n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        arr[a[i]]=count;
        printf("%d\t",arr[i]);
    }
    printf("\n");
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            printf("%d\t",i);
        }
    }
}