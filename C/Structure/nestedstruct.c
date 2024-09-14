#include<stdio.h>
int main()
{
    typedef struct pokrmon
    {
        int speed;
        int hp;
        char tier;
    }pokemon;

    typedef struct legendryPokemon
    {
        pokemon classic;
        int extraAbility;
    }lenPokemon;

    typedef struct godPokemon
    {
        lenPokemon epik;
        int supperAttack;
    }godPokemon;

    pokemon charizad;
    charizad.speed = 500;

    lenPokemon mewtwo;
    mewtwo.classic.tier = 's';
    mewtwo.extraAbility = 2;

    godPokemon Arceus;
    Arceus.supperAttack = 2;
    Arceus.epik.extraAbility = 3;
    Arceus.epik.classic.hp = 1000;

    printf("%d",Arceus.epik.classic.hp);



    return 0;
}