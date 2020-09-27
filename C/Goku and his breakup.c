#include<stdio.h>
void main()
{
	int x,y,n,i;
	scanf("%d",&n);
	scanf("%d",&x);

	for(i=0;i<n;i++)
	{
		scanf("%d",&y);
		if(y>=x)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}