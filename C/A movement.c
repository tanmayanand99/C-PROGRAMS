#include<stdio.h>
void main()
{
	int n,c=0;
	scanf("%d",&n);

	while(n!=0)
	{
		if(n<5)
		{
			c++;
			break;
		}
		n=n-5;
		c++;
	}
	printf("%d",c);

}