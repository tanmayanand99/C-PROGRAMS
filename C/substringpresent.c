#include<stdio.h>
#include<string.h>
void main()
{
    char str[20],str1[20];
    int j=0,i;
    printf("enter string");
    gets(str);

    printf("enter substring");
    gets(str1);
int x=strlen(str1);
    for(i=0,j=0;str[i]!='\0' || str1[j]!='\0';i++)
    {
        if(str[i]==str1[j])
        {
            j++;
        }
        else
        {
            j=0;
        }
        if(str1[j]=='\0')
        {
            break;
        }
    }
    if(j==x)
    {
        printf("substring is present");
    }
    else
    {
        printf("not present");    
    }
    
}