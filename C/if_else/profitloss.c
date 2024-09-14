#include<stdio.h>
int main()
{
    float p,s,d;

    printf("enter your cost of purchasing = ");
    scanf("%f",&p);
    printf("enter your prise of selling = ");
    scanf("%f",&s);

    d = p - s;

    if(d<0)
    {
        printf("you generate profit");
    }
    if(d==0)
    {
        printf("you aren't generate profit or less");
    }
    if(d>0)
    {
        printf("you are making loss in this sell");
    }

    return 0;

}