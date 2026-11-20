#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, guess, attempts = 0;

    srand(time(0));

    secretNumber = (rand() % 20) + 1;

    printf("NUMBER GUESSING GAME\n");
    printf("Guess a number between 1 and 20.\n");

    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > secretNumber)
        {
            printf("Too high!\n");
        }
        else if(guess < secretNumber)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("Congratulations!\n");
            printf("You guessed correctly!\n");
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}