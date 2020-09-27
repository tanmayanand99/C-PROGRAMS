#include<stdio.h>
#include<string.h>
void main()
{
    char str[20],str1[20];
    int j=0,i,count=0,present=0;
    printf("enter string");
    gets(str);

    printf("enter substring");
    gets(str1);
int x=strlen(str1);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==str1[j])
        {
            j++;
            count++;
            if(count==x)
            {
                present=1;
            }
        }
        else
        {
            j=0;
            count=0;
        }
    }
    if(count==x)
    {
        printf("substring is present");
    }
    else
    {
        printf("not present");    
    }
    
}