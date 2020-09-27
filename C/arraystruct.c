#include<stdio.h>
struct stud
{
    char name[20];
    int marks[4];
};
void main()
{
    struct stud s[2]={{"tanmay",{14,36,83,14}},{"saumya",{14,74,95,100}}};

    printf("name=%s      marks1=%d       marks4=%d",s[0].name,s[0].marks[0],s[0].marks[3]);
}
