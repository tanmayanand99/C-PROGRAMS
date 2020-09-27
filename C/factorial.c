#include<stdio.h>
long factorial(int);
void main()
{
    int n;
    char number[1000000000000];
    printf("enter number");
    scanf("%d",&n);

    itoa(factorial(n),number);
    printf("%s\n", number);
}
long factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}