#include<stdio.h>
void main()
{
    int t,i,n,k,p,count=0;
    printf("enter testcase");
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        count=0;
        scanf("%d",&n);
        k=n;
        while(n!=0)
        {
            p=n%10;
            if(p!=0)
            {
                if((k%p)==0)
                {
                    count++;
                }
            }
            n=n/10;
        }

        printf("%d",count);
    }
}