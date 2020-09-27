#include<stdio.h>
void main()
{
    int x1,v1,x2,v2,flag=0,i;

    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);

    for(i=0;i<10000;i++)
    {
        x1=x1+v1;
        x2=x2+v2;

        if(x1==x2)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
}