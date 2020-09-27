#include<stdio.h>
#include<string.h>
void sort(char);
void main()
{
    int t;
    char s1[200],s2[200];

    for(i=0;i<t;i++)
    {
        scanf("%s %s",s1,s2);

        sort(s1);
        sort(s2);
    }

}
void sort(char s[])
{
    int i,j,temp;
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    puts(s);
}