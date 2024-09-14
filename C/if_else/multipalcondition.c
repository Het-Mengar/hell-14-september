#include<stdio.h>
int main()
{

    int x;
    printf("enter the number = ");
    scanf("%d",&x);

    if(x%3==0 || x%5==0)
    {
        printf("it is divisible by 5 or 3");
    }
    else
    {
        printf("it is not divisible by 5 or 3");

    }

    return 0;
}