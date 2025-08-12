#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("====================================\n");
    printf("[Welcome to the Number Guessing Game]\n");
    printf("====================================\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Can you guess what it is?\n\n");

    do
    {
        printf(">>> Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
        {
            printf("   Too high! Try again.\n\n");
        }
        else if (guess < number)
        {
            printf("   Too low! Try again.\n\n");
        }
        else
        {
            printf("------------------------------------\n");
            printf("  Congratulations! You guessed it right.\n");
            printf("  Total attempts: %d\n", attempts);
            printf("------------------------------------\n");
        }
    } 
    while (guess != number);

    return 0;
}