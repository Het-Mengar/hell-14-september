#include<stdio.h>

typedef int intiger;

int main()
{
    int a = 0;
    intiger b = 1;

    printf("%d\n%d\n",a,b);

    typedef struct animal
    {
        int speed;
        int weight;
        int hight;
    }ani;

    ani lion;
    lion.weight = 600;
    lion.hight = 8;

    struct animal tigger;
    tigger.speed = 100;
    tigger.weight = 400;


    printf("%d\n%d",lion.weight,tigger.speed);

    return 0;
}