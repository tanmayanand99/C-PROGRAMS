#include<stdio.h>
void main()
{
    int size,i,ar[20],pos,n;

    printf("enter size of array");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("enter the number that you want to insert");
    scanf("%d",&n);

    printf("enter the position whee you want to insert the number");
    scanf("%d",&pos);

    for(i=size-1;i<=pos-1;i++)
    {
        ar[i+1]=ar[i];
        ar[pos-1]=n;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",ar[i]);
    }
}