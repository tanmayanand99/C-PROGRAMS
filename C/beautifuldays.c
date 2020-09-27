#include<stdio.h>
int main()
{
    int i,j,k,a,n,p,rev=0,c=0,r;
    float q;
    printf("enter i,j,k");
    scanf("%d %d %d",&i,&j,&k);

    for(a=i;a<=j;a++)
    {
        n=a;
        rev=0;
        while(a!=0)
        {
            p=a%10;
            rev=rev*10+p;
            a=a/10;
        }
        q=(n-rev)/k;
        if(q<0)
        {
            q=q*(-1);
        }
        r=q;
        if(r==q)
        {
            c++;
        }
    }
    printf("%d",c);
}