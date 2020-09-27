#include<stdio.h>
void main()
{
    char s[10000];
    int k,i;

    gets(s);

    scanf("%d",&k);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {   
            s[i]=s[i]+k;
            if(s[i]>90)
            {
                s[i]=(s[i]-90)+65-1;
            }    
        }
        if(s[i]>='a' && s[i]<='z')
        {   
            s[i]=s[i]+k;
            if(s[i]>122)
            {
                s[i]=(s[i]-122)+97-1;
            }    
        }
        if(s[i]>='0' && s[i]<='9')
        {   
            s[i]=s[i]+k;
            if(s[i]>57)
            {
                s[i]=(s[i]-57)+48-1;
            }    
        }
    }
    puts(s);
}