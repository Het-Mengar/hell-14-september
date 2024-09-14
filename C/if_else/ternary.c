#include<stdio.h>
int main()
{
    int a;
    printf("enter te number");
    scanf("%d",&a);

    a%5==0 ? printf("this number is divisible by five") : printf("this numberr is  notdivisible by five");

    return 0;
}