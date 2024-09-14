#include<stdio.h>
#include<string.h>

typedef struct pokemon
    {
        int attack;
        int hp;
        int speed;
        char tier;
        char name[20];

    }pokemon;

void change(pokemon* p)
{
    (*p).attack = 90;
    (*p).hp = 100;
    p->speed = 120;
    p->tier = 'A';
    strcpy(p->name,"Raychu");

    return;

}    

int main()
{

    // pokemon pikachu;
    // pikachu.attack = 70;
    // pikachu.hp = 80;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name,"pikachu");

    pokemon pikachu = {70,80,100,'A',"Pikachu"};

    pokemon* p = &pikachu;

    // printf("%p\n",&pikachu.attack);
    // printf("%p\n",&pikachu.hp);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",&pikachu);

    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n\n",pikachu.name);

    change(&pikachu);

    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    return 0;
}