#include<stdio.h>
#include<string.h>

typedef union pokemon
    {
        int attack;
        int hp;
        int speed;
        char tier;
        char name[20];

    }pokemon;

int main()
{

    pokemon pikachu;
    pikachu.attack = 70;
    
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"pikachu");
    pikachu.hp = 80;



    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

    return 0;
}