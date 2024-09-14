#include<stdio.h>
int main()
{
    float l;
    printf("enter the length of rectangle = ");
    scanf("%f",&l);

    float b;
    printf("enter the breadth of rectangle = ");
    scanf("%f",&b);

    float a = l*b;
    float p = 2*(l+b);

    if(a>p)
    {
        printf("your area is greter than paramiter");
    }
    else
    {
        printf("your area is not greter than paramiter");
    }

    return 0;   

}