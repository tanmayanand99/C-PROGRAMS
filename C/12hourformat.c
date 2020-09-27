#include<stdio.h>
#include<string.h>
void main()
{
    int y,hh,mm,ss;
    char str[30];
    printf("enter string");
    gets(str);

    y=strlen(str);

    hh=(str[0]-'0')*10+(str[1]-'0');
    mm=(str[3]-'0')*10+(str[4]-'0');
    ss=(str[6]-'0')*10+(str[7]-'0');

    if(hh<12 && str[8]=='P')
    {
        hh=hh+12;
    }
    if(hh==12 && str[8]=='A')
    {
        hh=00;
    }

    printf("%2d:%2d:%2d",hh,mm,ss);
}