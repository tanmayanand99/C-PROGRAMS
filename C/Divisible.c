#include<stdio.h>
#include<math.h>
int firstdig(int);
int lastdig(int);
void main()
{
   int n,i,k,sum=0;
   
   scanf("%d",&n);
    int a[n];
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   k=n/2;
   for(i=0;i<k;i++)
   {
       a[i]=firstdig(a[i]);
   }
   for(i=k;i<n;i++)
   {
       a[i]=lastdig(a[i]);
   }
   for(i=0;i<n;i++)
   {
      sum=sum*10+a[i];
   }
   if(sum%11==0)
   {
       printf("OUI");
   }
   else
   {
       printf("NON");
   }
   
}
int firstdig(int num)
{
    int c=0,n;
    n=num;
    while(num!=0)
    {
        c++;
        num=num/10;
    }
    c--;
    c=pow(10,c);
    n=n/c;
    return n;
}
int lastdig(int num)
{
    num=num%10;
    return num;
}