#include<stdio.h>
void main()
{
    int count=1,size,ar[30],i,j;
    printf("enter size");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                j++;
            }
        }
        for(j=i+1;j<size;j++)
        {
            if(ar[i]==ar[j])
            {
                printf("frequency of %d is %d\n",ar[i],count);
                i++;
            }
        }
    }
}