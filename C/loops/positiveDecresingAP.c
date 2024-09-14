#include<stdio.h>
int main()
{
    float a,d;
    printf("enter the first term : ");
    scanf("%f",&a);

    printf("enter the positive commen difference : ");
    scanf("%f",&d);

    for(int i=1;a>0;i++)
    {
        printf("%f\n",a);
        a = a - d;

    }

    return 0;
}