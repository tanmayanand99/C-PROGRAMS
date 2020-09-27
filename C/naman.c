#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d\n",&t);

    for(i=0;i<t;i++)
    {
        int i=0,x=0,a[10],n,c=0,w;
        scanf("%d",&n);

        w=n;

        while(n!=0)
        {
            a[i]=n%10;
            n=n/10;
            i++;
            c++;
        }
        for(i=0;i<c;i++)
        {
            if(a[i]!=0)
            {
                if(w%a[i]==0)
                {
                    x++;
                }
            }
        }
        printf("%d\n",x);
    }
    return 0;
}