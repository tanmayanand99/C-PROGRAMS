#include<stdio.H>
struct date
{
    int day,month,year;
}d1,d2;
int comparedate(struct date d1,struct date d2);
void printdate(struct date D);
void main()
{
    printf("Enter the Date 1 (dd/mm/yyyy) :-\n");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    printf("Enter the Date 2 (dd/mm/yyyy) :-\n");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
    printdate(d1);
    int c = comparedate(d1,d2);
    if(c==0)
    printf(" is equal to ");
    else if(c>0)
    printf(" is greater than ");
    else
    printf(" is smaller than ");
    printdate(d2);
}
int comparedate(struct date d1,struct date d2)
{
    if(d1.day==d2.day&&d1.month==d2.month&&d1.year==d2.year)
    return 0;
    else if(d1.year>d2.year||d1.year==d2.year&&d1.month>d2.month||d1.year==d2.year&&d1.month==d2.month&&d1.day>d2.day)
    return 1;
    else
    return -1;
}
void printdate(struct date D)
{
    printf("\n %d/%d/%d ",D.day,D.month,D.year);
}
