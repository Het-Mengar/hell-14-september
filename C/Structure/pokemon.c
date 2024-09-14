#include<stdio.h>
int main()
{
    struct pokemon
    {
        int attack;
        int hp;
        int speed;
        char tier;
    };

    struct pokemon pikachu;
    pikachu.attack = 70;
    pikachu.hp = 80;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    struct pokemon charizad;
    charizad.attack = 130;
    charizad.hp = 100;
    charizad.speed = 120;
    charizad.tier = 's';

    printf("%d\n",charizad.hp);

    printf("enter the speed of charizad according to you");
    scanf("%d",&charizad.speed);
    printf("%d",charizad.speed);




    return 0;
}