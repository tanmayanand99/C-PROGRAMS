#include<stdio.h>
void main()
{
	int n,sh,sm,eh,em,hl,ml,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&sh,&sm,&eh,&em);

		if(sh>eh)
		{
			hl=sh-eh-1;
		}
		else
		{
			hl=eh-sh-1;
		}

		
		ml=60-sm+em;
	

		printf("%d %d\n",hl,ml);
	}
}