#include<stdio.h>
int main()

{
    float r;
    printf("enter radius of circle = ");
    scanf("%f",&r);
    float pi = 3.1415;
    float a = pi*r*r;
    printf("Area of the circle is = %f",a);
    return 0;
}