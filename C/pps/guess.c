#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess;
    int attempts = 0;

    srand(time(0));

    number = rand() % 1000 + 1;

   
    do{
         printf("guess the number between 1 to 1000 : ");


        scanf("%d",&guess);
        attempts++;

        if(guess > number)
        {
            printf("Too high\n");
        }
        else if(guess < number)
        {
            printf("too low\n");
        }
        else
        {
            printf("correct guess!! you found number in %d gueeses",attempts);
        }

    } while (guess != number);

    return 0;
}