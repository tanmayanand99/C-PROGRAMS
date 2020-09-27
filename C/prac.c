#include<stdio.h>
void main()
{
    int i,n,p;

    printf("enter n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i==2)
        {
            goto p;
        }
        printf("%d",i);
    }
    p:

    printf("tanmay");
}