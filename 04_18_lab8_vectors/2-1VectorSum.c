/* example8-2.c */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void printVector(int* a, int n)
{
      int i;
      for (i = 0; i < n; i++)
      {
            printf("%2i:  %3i\n",i, a[i]);
      }
}

int vectorSum(int* a)
{
    /* calculates the sum of a vector */
    int sum = 0;
    int i;
    for (i=0; i<100; i++)
    {
        sum += a[i];
    }

    return sum;
}

int main()
{
      int vec[100];

      /* seeding the random number generator: */
      srand(time(NULL));

      int i;
      for (i = 0; i < 100; i++)
      {
            vec[i] = rand() % 10 + 1;
      }

      printf("The vector is:\n");
      printVector(vec, 100);

      printf("The sum of the vector is %i", vectorSum(vec));

      return EXIT_SUCCESS;
}
