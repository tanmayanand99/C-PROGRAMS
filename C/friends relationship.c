#include<stdio.h>
void main()
{
	int t,n,i,j,k,l,nn;

	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
        nn=n;
		for(j=1;j<=n;j++)
		{   
			for(k=1;k<=j;k++)
			{
				printf("*");
			}
            for(l=1;l<=2*nn-2;l++)
            {
                printf("#");
            }
            nn--;
            for(k=1;k<=j;k++)
			{
				printf("*");
			}
            printf("\n");
		}
	}

}