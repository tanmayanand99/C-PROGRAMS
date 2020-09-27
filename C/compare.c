#include<stdio.h>
#include<string.h>
struct student
{
    char n[20];
    int rn;
    long long phn;
}std1,std2;

void main()
{
    int eq1=0,eq2=0,eq3=0;
    printf("Enter the Information for First Student \n"
           "Name, Roll No., Phone Number \n");
    scanf("%s %d %lld",&std1.n,&std1.rn,&std1.phn);
    printf("Enter the Information for Second Student \n"
           "Name, Roll No., Phone Number \n");
    scanf("%s %d %lld",&std2.n,&std2.rn,&std2.phn);
    if(std1.rn==std2.rn)
    eq1++;
    if(std1.phn==std2.phn)
    eq2++;
    if((strcmp(std1.n,std2.n))==0)
    eq3++;
    if(((eq1+eq2+eq3)<3)&&((eq1+eq2+eq3)>0))
    {
        printf("Only \n");
        if(eq1==1)
        printf("Roll No. \n");
        if(eq2==1)
        printf("Phone Number \n");
        if(eq3==1)
        printf("Name \n");
        printf("Are Same !");
    }
    else if((eq1+eq2+eq3)==3)
    printf("ALL DETAILS ARE SAME !\n");
    else
    printf("NONE OF THE DETAILS ARE SAME !\n");

}