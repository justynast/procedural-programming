/* example8-4.c */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void printVector(float* a, int n)
{
      int i;
      for (i = 0; i < n; i++)
      {
            printf("%2i:  %7.3f\n",i, a[i]);
      }
}

int main()
{
      float vec[100];

      /* seeding the random number generator: */
      srand(time(NULL));

      int i;
      for (i = 0; i < 100; i++)
      {
            /* generating a random floating point number between 0 and 1 */
            vec[i] = ((float)rand()) / ((float)RAND_MAX);
      }

      printf("The vector is:\n");
      printVector(vec, 100);

      return EXIT_SUCCESS;
}
