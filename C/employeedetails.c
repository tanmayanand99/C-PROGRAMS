#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
int check_date(struct date *dt);

void main()
{
    struct employee
    {
        int code;
        char emp_name[50];
        struct date doj;
    };
    struct employee emp[5];
    int i,chkdt;
    struct date curr;

    printf("\nEnter current date:");
    chkdt=check_date(&curr);
    if(chkdt==0)
    {
        printf("\nImproper date entered");
    }

    printf("\nEnter the information for 5 employees");

    for(i=0;i<5;i++)
    {
        fflush(stdin);
        printf("\nEmp %d:\nCode:",i);
        scanf("%d",&emp[i].code);

        printf("\nName:");
        scanf("%s",emp[i].emp_name);

        printf("\nDate of Joining(dd-mm-yyyy):");
        chkdt=check_date(&emp[i].doj);

        if(chkdt==0)
        {
            printf("\nImproper date entered");
        }
    }

    printf("\nEmployees whose tenure is 3 years or more:");

    for(i=0;i<5;i++)
    {
        if(curr.year>emp[i].doj.year+3)
        {
            printf("\n%s",emp[i].emp_name);
        }
        else
        {
            {
                if(curr.year==emp[i].doj.year+3)
                {
                    if(curr.month>emp[i].doj.month)
                    {
                        printf("\n%s",emp[i].emp_name);
                    }
                    else
                    {
                        if((curr.month==emp[i].doj.month)&&(curr.day>=emp[i].doj.day))
                        {
                            printf("\n%s",emp[i].emp_name);
                        }
                    }
                    
                }
            }
        }
    }
}

int check_date(struct date *dt)
{
    printf("\nEnter date(dd)");
    scanf("%d",&dt->day);

    printf("\nEnter month(mm)");
    scanf("%d",&dt->month);

    printf("\nEnter year(yy)");
    scanf("%d",&dt->year);

    if((dt->day>31 || dt->day<0)||(dt->month>12 || dt->month<0)||(dt->year>9999 || dt->year<1000))
    {
        return(0);
    }
    else
    {
        return(1);
    }    
}