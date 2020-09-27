#include<stdio.h>
void main()
{
    int n,i,a[100];
    float c=0,c1=0,c2=0;
 
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
        else if(a[i]<0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    c=c/n;
    c1=c1/n;
    c2=c2/n; 

    printf("%f\n",c2);
    printf("%f\n",c1);
    printf("%f\n",c);

}