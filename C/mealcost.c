#include<stdio.h>
#include<math.h>

int main()
{
    double mealcost;
    int tippercent,taxpercent;

    scanf("%lf",&mealcost);
    scanf("%d",&tippercent);
    scanf("%d",&taxpercent);

    double tip=mealcost*(tippercent*0.01);
    double tax=mealcost*(taxpercent*0.01);
    printf("%lf",tip);
    printf("%lf",tax);
    int total=mealcost+tip+tax;
    total=round(total);
    printf("%d",total);
    return 0;

}
