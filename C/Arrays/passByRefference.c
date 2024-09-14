#include<stdio.h>
void fun(int a[])
{
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;

    return;
}

int main()
{
    int a[2] = {1,4};

    printf("%d %d",a[0],a[1]);
    fun(a);

    printf("\n%d %d",a[0],a[1]);

    return 0;
}