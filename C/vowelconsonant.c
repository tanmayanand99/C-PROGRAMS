#include<stdio.h>
int main()
{
    int t,i,n,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int count=0;

        scanf("%d",&n);
       
        char str[n];
        scanf("%s",str);

        for(j=0;j<n-1;j++)
        {
            if(str[j]!='a' && str[j]!='e' && str[j]!='i' && str[j]!='o' && str[j]!='u')
            {
                if(str[j+1]=='a' || str[j+1]=='e' || str[j+1]=='i' || str[j+1]=='o' || str[j+1]=='u')
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
	return 0;
}