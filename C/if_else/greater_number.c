#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter your first number = ");
    scanf("%f",&a);

    printf("enter your second number = ");
    scanf("%f",&b);

    printf("enter your third number = ");
    scanf("%f",&c);

    printf("enter your fourth number = ");
    scanf("%f",&d);


    if(a>b && a>c && a>d)
    {
        printf("your first number is gretest : %f",a);
    }

    if(b>a && b>c && b>d)
    {
        printf("your second number is gretest : %f",b);
    }

    if(c>a && c>b && c>d)
    {
        printf("your third number is gretest : %f",c);
    }

    if(d>a && d>b && d>c)
    {
        printf("your fourth number is gretest : %f",d);
    }

    return 0;
    
}