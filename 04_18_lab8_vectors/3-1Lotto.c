#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void printVector(int* a, int n)
{
      int i;
      for (i = 0; i < n; i++)
      {
            printf("%2i:  %3i\n",i+1, a[i]);
      }
}

int myRand(int m)
{
    /* generates a random number between 1 and m */
    int rn;
    rn = rand()%m + 1;
    return rn;

}

int main()
{
    /* seeding the random number generator: */
    srand(time(NULL));

    int lotto[6];
    int maxrand = 49;
    int i, num;

    for (i=0; i<6; i++){
        lotto[i]=0;
    }

    int different_numbers = 0;
    while(different_numbers<6)
    {
        num = myRand(maxrand);
        int found = 0; /* check if number is already in the lotto */
        for (i=0; i<different_numbers; i++){
            if (num == lotto[i]) found = 1;
        }

        if (found==0) /* if number isn't already in the vector */
        {
            lotto[different_numbers] = num;
            different_numbers++;
        }

    }

    printf("The lotto numbers are: \n");
    printVector(lotto,6);

    return EXIT_SUCCESS;
}
