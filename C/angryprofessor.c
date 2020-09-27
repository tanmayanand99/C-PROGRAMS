#include<stdio.h>
void main()
{
    int n,k,t,i,j,p,c=0;

    scanf("%d",&t);


    for(i=1;i<=t;i++)
    {
        c=0;
        fflush(stdin);
        scanf("%d %d",&n,&k);

        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            if(a[j]<=0)
            {
                c++;
            }
        }
        if(c>=k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
        
        
    }    
}