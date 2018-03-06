#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int r = (rand() % 100)+1;
    printf("I am thinking about a number between 1 and 100. Try to guess the number.\n");
    int guess;
    printf("Your guess: ");
    scanf("%i", &guess);

    while (guess != r)
    {
        if (guess > r)
        {
            printf("Too big!\nNext guess: ");
            scanf("%i", &guess);
        }

        else if (guess < r)
        {
            printf("Too small!\nNext guess: ");
            scanf("%i", &guess);
        }
    }

    printf("Congrats! You guessed it!");

    return 0;
}
