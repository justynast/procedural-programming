#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, randomNumber;
    printf("How many random numbers would you like to generate? ");
    scanf("%i",&n);

    /* seeding the rando number generator */
    srand(time(NULL));

    int i;
    for(i=0; i<=n; i++)
    {
        /*generate a random number in range 1-10*/
        randomNumber = rand()%10 + 1;
        printf("%i\n", randomNumber);
    }
    return 0;
}
