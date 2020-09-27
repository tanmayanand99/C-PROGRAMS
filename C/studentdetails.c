#include<stdio.h>
struct student
{
    char name[100];
    long long contact_number;
    int roll_no;
    int marks;
    struct dateofbirth
    {
        int date;
        int month;
        int year;
    } d1;
    struct dateofadm
    {
        int date;
        int month;
        int year;
    } d2;
};
void main()
{
    int i;
    struct student st[100];
    for(i=0;i<100;i++)
    {
        printf("Enter Name:-\n");
        fflush(stdin);
        gets(st[i].name);

        printf("Enter contact number of %s:-\n",st[i].name);
        scanf("%lld",&st[i].contact_number);

        printf("Enter roll no of %s:-\n",st[i].name);
        scanf("%d",&st[i].roll_no);

        printf("Enter marks of %s:-\n",st[i].name);
        scanf("%d",&st[i].marks);

        printf("Enter date of birth of %s:-\n",st[i].name);

        printf("Enter Date:-\n");
        scanf("%d",&st[i].d1.date);
        printf("Enter Month:-\n");
        scanf("%d",&st[i].d1.month);
        printf("Enter Year:-\n");
        scanf("%d",&st[i].d1.year);

        printf("Enter the Date of Admission of %s:-\n",st[i].name);

        printf("Enter Date:-\n");
        scanf("%d",&st[i].d2.date);
        printf("Enter Month:-\n");
        scanf("%d",&st[i].d2.month);
        printf("Enter Year:-\n");
        scanf("%d",&st[i].d2.year);
}
    //for percentage
    for(i=0;i<100;i++)
    {
        if(st[i].marks>80)
        {
            printf("S.no=%d\n",i+1);

            printf("Name=%s\n",st[i].name);

            printf("Contact Number=%lld\n",st[i].contact_number);

            printf("Roll no.=%d\n",st[i].roll_no);

            printf("Marks=%d\n",st[i].marks);

            printf("Date of Birth is %d-%d-%d\n",st[i].d1.date,st[i].d1.month,st[i].d1.year);

            printf("Date of Admission is %d-%d-%d",st[i].d2.date,st[i].d2.month,st[i].d2.year);
        }

    }
}
