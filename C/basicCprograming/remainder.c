#include<stdio.h>
int main()
{
    int a,b;  //a>b
    printf("enter the value of dividend = ");
    scanf("%d",&a);

    printf("enter the value of divisor = ");
    scanf("%d",&b);

    int  c = a/b;
    int  r = a-b*c;

    printf("your reamainder is %d when we do  %d divded by %d",r,a,b);

    return 0;
}