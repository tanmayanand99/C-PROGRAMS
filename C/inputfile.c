#include<stdio.h>
void main()
{
    FILE *fp1,*fp2;
    int ch;
    fp1=fopen("E:/input.txt","w");
    fprintf(fp1, "1\n2\n3\n4\n");

    fp2=fopen("E:/output.txt","w");
    if((ch=fgetc(fp1)%2==0))
    {
        fputc(ch,fp2);
    }
     
}