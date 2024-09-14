#include<stdio.h>
int main()

{
    int a,b,c;

    printf("enter a number");
    scanf("%d",&a);

    printf("enter a number");
    scanf("%d",&b);

    printf("enter a number");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        printf("%d is a gretest intiger",a);

        else
        printf("%d is agretest intiger",c);
    }
    else
    {
        if(b>c)
        printf("%d is a gretest intiger",b);

        else
        printf("%d is agretest intiger",c);
    }
    return 0;
}