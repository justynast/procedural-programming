#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int myRand(int m)
{
    /* generates a random number between 1 and m */
    int rn;
    rn = rand()%m + 1;
    return rn;

}

int main()
{
    int n, m, randomNumber;
    printf("How many random numbers would you like to generate? ");
    scanf("%i",&n);

    printf("What range? ");
    scanf("%i", &m);

    srand(time(NULL));

    int i;
    for(i=0; i<=n; i++)
    {
        /*generate a random number in range 1-10*/
        randomNumber = myRand(m);
        printf("%i\n", randomNumber);
    }
    return 0;
}
