#include<stdio.h>
struct time
{
    int seconds;
    int minutes;
    int hours;
};
void difference(struct time t1, struct time t2, struct time *diff);
int main()
{
    struct time t1,t2,diff;
    printf("Enter time 1 (hours,minutes,seconds) :-\n");
    scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
    printf("Enter time 2 (hours,minutes,seconds) :-\n");
    scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
    difference(t1,t2,&diff);
    printf("\n TIME DIFFERENCE :- %d:%d:%d -",t1.hours,t1.minutes,t1.seconds);
    printf(" %d:%d:%d = ",t2.hours,t2.minutes,t2.seconds);
    printf("%d:%d:%d \n",diff.hours,diff.minutes,diff.seconds);
    return 0;
}
void difference(struct time t1, struct time t2, struct time *diff)
{
    int temp;
    if(t1.hours<t2.hours)
    {
        temp=t1.hours;
        t1.hours=t2.hours;
        t2.hours=temp;
        temp=t1.minutes;
        t1.minutes=t2.minutes;
        t2.minutes=temp;
        temp=t1.seconds;
        t1.seconds=t2.seconds;
        t2.seconds=temp;
    }
    if(t2.seconds>t1.seconds)
    {
        --t1.minutes;
        t1.seconds+=60;
    }
    diff->seconds = t1.seconds - t2.seconds;
    if(t2.minutes > t1.minutes)
    {
        --t1.hours;
        t1.minutes+=60;
    }
    diff->minutes = t1.minutes - t2.minutes;
    diff->hours = t1.hours - t2.hours;
}