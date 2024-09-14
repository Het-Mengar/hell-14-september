#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    typedef struct date
    {
        int date;
        int month;
        int year;
    }date;

    date a,b;

    a.date = 7;
    a.month = 1;
    a.year = 2007;

    b.date = 7;
    b.month = 1;
    b.year = 2024;

    if(a.date == b.date && a.month == b.month && a.year == b.year) printf("this are same dates");
    else printf("this are different dates");

    date c;

    printf("\n");

    c = a;

    bool flag = true;

    if(a.date == b.date && a.month == b.month && a.year == b.year) flag = false;
    
    if(flag == true) printf("this are same dates");
    else printf("this are different dates");

    return 0;
}