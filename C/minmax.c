#include<stdio.h>
void main()
{
    int a[100],n,i,j,temp,c=0,s=0;

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<5;i++)
    {
        c=c+a[i];
    }
    for(i=1;i<5;i++)
    {
        s=s+a[i];
    }

    printf("min=%d",c);
    printf("max=%d",s);

}
