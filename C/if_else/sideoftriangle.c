#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the length of first side = ");
    scanf("%f",&a);

    printf("enter the length of second side = ");
    scanf("%f",&b);

    printf("enter the length of third side = ");
    scanf("%f",&c);

    if((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("this triangle is possible");
    }
    else
    {
        printf("this triangle is  not possible");

    }
    return 0;
}