#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    int ch;

    fp1=fopen("E:/t.txt","r");
    if(fp1==NULL)
    {
        printf("file not found");
    }
    else
    {
        printf("file opened");
    }
    fp2=fopen("E:/ta.txt","w");

    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    } 
    
}