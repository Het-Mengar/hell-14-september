#include<stdio.h>
int main()
{
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    int i = 0;
    while(a != 0)
    {
        a = a/10;
        i++;
    }

    printf("your number's digit is = %d",i);
    return 0;
}