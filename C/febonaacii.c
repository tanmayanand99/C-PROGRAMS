#include<stdio.h>
void main()
{
    int n;
    int a=0,b=1,i,c=0;

    printf("enter n");
    scanf("%d",&n);

    printf("%d",a);

    for(i=0;i<n;i++)
    {
        c=a+b;
        printf("%d",&c);
        a=b;
        b=c;
    }
}