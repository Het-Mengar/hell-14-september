#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    
    printf("enter the value of x1 : ");
    scanf("%lf",&x1);

    printf("enter the value of y1 : ");
    scanf("%lf",&y1);

    printf("enter the value of x2 : ");
    scanf("%lf",&x2);

    printf("enter the value of y2 : ");
    scanf("%lf",&y2);

    printf("enter the value of x3 : ");
    scanf("%lf",&x3);

    printf("enter the value of y3 : ");
    scanf("%lf",&y3);

    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y2-y3)/(x2-x3);

    if(m1==m2)
    printf("they three points are stay on one line");
    else
    printf("they three points are't stay on one line");


    return 0;
}