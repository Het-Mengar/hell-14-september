#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void playRound();
char getComputerChoice();
char getUserChoice();
void determineWinner(char userChoice, char computerChoice);

int main()
{
    char userChoice;

    do
    {
        userChoice = getUserChoice();

        if(userChoice != 'Q')
        {
            char computerChoice = getComputerChoice();

            printf("you Chose : %c\n",userChoice);
            printf("computer chose : %c\n",computerChoice);

            determineWinner(userChoice,computerChoice);
        }
    } 
    while(userChoice != 'Q');

    printf("thank you for playing.\n");
    return 0;
}

char getUserChoice()
{
    char choice;
    printf("choose [R - Rock,P - Papper,S - Scissor | Q - Quit the Game]\n");
    scanf(" %c",&choice);
    if(choice == 'r') choice = 'R';
    if(choice == 's') choice = 'S';
    if(choice == 'p') choice = 'P';
    if(choice == 'q') choice = 'Q';
    return choice;
}

char getComputerChoice()

{
    srand(time(0));
    int randomNumber = rand() % 3;

    switch(randomNumber)
    {
        case 0: return 'R';
        case 1: return 'P';
        case 2: return 'S';
        
    }
    return 'R';
}

void determineWinner(char userChoice, char computerChoice)
{
    if(userChoice == computerChoice)
    {
        printf("\n it is a tie \n\n");
    }
    else if((userChoice == 'R' && computerChoice == 'S') || (userChoice == 'P' && computerChoice == 'R') ||
            (userChoice == 'S' && computerChoice == 'P'))
    {
        printf("\n!!!!!!!!!!!!! you win !!!!!!!!!!!!!\n\n");
    }
    else
    {
        printf("\n...............computer win...........\n\n");
    }
}