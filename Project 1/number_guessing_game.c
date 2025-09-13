#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random seed based on current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int target;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &target);

        if (target < randomNumber)
        {
            printf("Guess higher number\n");
        }
        else if (target > randomNumber)
        {
            printf("Guess lower number\n");
        }
        else
        {
            break;
        }

        no_of_guesses++;

    } while (target != randomNumber);

    printf("You Won! you took %d guesses", no_of_guesses);

    return 0;
}
