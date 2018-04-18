/* example8-2.c */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

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
    int sum = 0;
    int i;
    for (i=0; i<100; i++)
    {
        sum += a[i];
    }

    return sum;
}

double vectorLength(int* a)
{
    int i, q;
    double vlen = 0;
    double sum = 0;
    for (i=0; i<100; i++)
    {
        q = a[i] * a[i];
        sum += q;
    }

    vlen = sqrt(sum*1.0);

    return vlen;
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
      printf("\n");
      printf("The length of the vector is %f", vectorLength(vec));

      return EXIT_SUCCESS;
}
