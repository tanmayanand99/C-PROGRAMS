#include<stdio.h>
#include<string.h>
int main()
{
    struct player
    {
        char name[20];
        int rank[3];
        int total;
    };
    struct player p[]={ "Prince",{0},0,
                        "Tanmay",{0},0,
                        "Ashutosh",{0},0,
                        "Arun",{0},0,
                        "Qasim",{0},0,
                        };
    char winner[20];
    int i,judge,large,c=1;
    for(judge=0;judge<=2;judge++)
    {
        printf("Judge No.%d Enter the Ranks :-\n",c++);
        for(i=0;i<5;i++)
        {
            printf("%s:- ",p[i].name);
            scanf("%d",&p[i].rank[judge]);
            p[i].total+=p[i].rank[judge];
        }
    }
    large=p[0].total;
    for(i=1;i<5;i++)
    {
        if(p[i].total>large)
        {
            large=p[i].total;
            strcpy(winner,p[i].name);

        }
    }
    printf("Winner = %s \n"
           "Score = %d\n",winner,large);
           return 0;
}