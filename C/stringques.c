#include<stdio.h>
void main()
{
    char s1[50],s2[50];
    int k,l1,l2,i,j,count=0;
    
    scanf("%s",&s1);
    scanf("%s",&s2);

    l1=strlen(s1);
    l2=strlen(s2);
    k=l1/2;
    k--;
    for(i=k,j=0;s1[i]!='\0',s2[j]!='\0';i++,j++)
    {
        if(s2[j]!=s1[i])
        {
            count++;
        }
    }
    printf("%d",count);
}