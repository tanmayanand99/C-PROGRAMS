#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,c=0,x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,i;
		scanf("%d",&n);
		char s[n];
		gets(s);
		for(x=0;s[x]!='\0';x++)
		{
			if(s[x]>='A' && s[x]<='Z')
			{
				s[x]+=32;
			}
		}
		for(x=0;s[x]!='\0';x++)
		{
			if(s[x]!='a' && s[x]!='e' && s[x]!='i' && s[x]!='o' && s[x]!='u' )
			{
				if(s[x+1]=='a' || s[x+1]=='e' || s[x+1]=='i' || s[x+1]=='o' || s[x+1]=='u')
				{
					c++;
				}
			}
		}
		printf("%d\n",c);
	}

	return 0;
}