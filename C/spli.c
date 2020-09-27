#include<stdio.h>
void main()
{
    int size,i,ar[30],pos,temp;
    printf("enter size");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("enter position from where you want to split");
    scanf("%d",&pos);

    for(i=0;i<size;i++)
    {
        temp=ar[pos];
        ar[pos]=ar[i];
        ar[i]=temp;
    }
    for(i=0;i<size;i++)
    {
        printf("%d",ar[i]);
    }
}