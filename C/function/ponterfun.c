#include<stdio.h>
void change(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
    return;
}

int main()
{
    int a = 5;
    int b = 7;
    change(&a,&b);
    
    printf("%d\n%d",a,b);

    return 0;
}