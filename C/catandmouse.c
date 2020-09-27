#include<stdio.h>
int main()
{
    int query,i,x,y,z,a,b;

    scanf("%d",&query);

    for(i=0;i<query;i++)
    {
        scanf("%d %d %d",&x,&y,&z);

        a=z-x;
        b=z-y;

        if(b<0)
        {
            b=b*(-1);
        }

        if(a<0)
        {
            a=a*(-1);
        }

        if(a==b)
        {
            printf("Mouse C\n");
        }
        else if(a>b)
        {
            printf("Cat B\n");
        }
        else
        {
            printf("Cat A\n");
        }
    }
}