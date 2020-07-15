#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    int secretNumber = 5;
    int userGuess = 1;
    int guessLimit = 5;
    int guessCount = 0;
    int outOfGuesses = 0;
    while(userGuess != secretNumber && outOfGuesses == 0)
    {
        if(guessCount < guessLimit){ 
            printf("Enter your guess: ");
            scanf("%d", &userGuess);
            guessCount++;
        }
        else
        {
            outOfGuesses = 1;
        }
        
    }
    if(outOfGuesses == 1)
    {
        printf("You are out of guesses\n");
    }

    else
    {
        printf("Yay you did it the secret number was %d!\n", secretNumber);
    }

    return 0;
}