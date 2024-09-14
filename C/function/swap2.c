#include<stdio.h>
int main()
{
    int a = 1;
    int b = 7;


    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n%d",a,b);
    return 0;
}