#include<stdio.h>
struct customer
{
     int acc_no;
     char name[20];
     int bal;
}b[100];

void print(struct customer b[],int n)
{
     int i;
     printf("\nCustomer Details whose Balance < 100000 Rs. \n");
     for(i=0;i<n;i++)
    {
          if(b[i].bal<100000)
            {
               printf("Account Number : %d\n",b[i].acc_no);
               printf("Name           : %s\n",b[i].name);
               printf("Balance        : %d\n",b[i].bal);
            }
    }
}
int main()
{
     int i;
     for(i=0;i<100;i++)
     {
          printf("Enter Details of Customer %d\n",i+1);
         printf("Enter Account Number : ");
          scanf("%d",&b[i].acc_no);
          printf("Enter Name           : ");
          scanf("%s",b[i].name);
          printf("Enter Balance        : ");
          scanf("%d",&b[i].bal);

     }
    print(b,100);
    return 0;
}
