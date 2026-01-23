#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess , nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; //Generates the number from 1 to 100
    
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if (guess < number)
        {
            printf("Higher number please!\n");
        }

        else if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess == number)
        {
            printf("You guessed it correct!\n");
        }
        nguesses++;
    } while (guess!=number);
    printf("The number of guesses taken is %d\n", nguesses);
    return 0;
}