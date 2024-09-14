#include<stdio.h>

void fibo(int x)
{
    printf("1");
    int a = 1;
    int b = 1;
    int sum = 1;
    for(int i = 2;i<=x;i++)
    {
         printf("\n%d",sum);
        sum = a + b;
        a = b;
        b = sum;
       
    }
    return;
}

int main()
{
    int a = 5;
    fibo(a);
    return 0;
}