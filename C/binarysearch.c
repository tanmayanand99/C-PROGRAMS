#include<stdio.h>
void main()
{
    int size,i,num,ar[20],count,mid;
    int l=0;
    
    printf("enter size of array");
    scanf("%d",&size);
    int r=size-1;
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("enter number you want to search");
    scanf("%d",&num);

    for(i=l;i<=r;i++)
    {
        mid=(l+r)/2;
        if(ar[mid]==num)
        {
            count=1;
            break;
        }
        else if(ar[mid]<num)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    
    printf("the position of the element is %d",mid);
}