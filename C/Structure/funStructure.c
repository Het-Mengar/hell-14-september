#include<stdio.h>

typedef struct pokemon
{
    int speed;
    int hp;
    char tier;
}pokemon;

void fun(pokemon p)
{
    printf("%c\n",p.tier);
    printf("%d\n",p.speed);
    return;
}

void change(pokemon x)
{
    x.speed = 70;
    printf("%d",x.speed);

    return;
}

int main()
{
    pokemon pikachu;
    pikachu.speed = 50;
    pikachu.tier = 'A';

    fun(pikachu);
    change(pikachu);

    return 0;
}