#include<stdio.h>
int main()

{
    float principal,rate,time,interest;

    printf("enter your principal amount = ");
    scanf("%f",&principal);

    printf("enter your interest rate = ");
    scanf("%f",&rate);

    printf("enter your time duration = ");
    scanf("%f",&time);

    interest = principal*rate*time/100;
    
    printf("your yearly interest is = %f",interest);

    return 0;

}