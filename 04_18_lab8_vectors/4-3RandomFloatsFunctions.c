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

float myRand(float x, float y)
{
    /* function that generates a random bloating point number between x-y */
    /* this generates a random between 0 and RAND_MAX */
    int r0 = rand();

    /* this generates a random number between 0 and 1 */
    float r1 = ((float)r0) / ((float)RAND_MAX);

    /* this stretches the interval of the random number */
    float r2 = (y - x) * r1;

    /* this moves the interval so that the a is the lower values */
    float r3 = r2 + x;

    return r3;
}

float sum(float*a, int b)
{
    float result = 0;
    int i;
    for (i=0; i<b; i++)
    {
        result += a[i];
    }

    return result;
}

float average(float*a, int b)
{
    return sum(a,b)/b;
}

int main()
{
    float vec[100];

    /* seeding the random number generator: */
    srand(time(NULL));

    int i;
    for (i=0; i<100; i++)
    {
        vec[i] = myRand(-2,2);
    }

    printf("The vector:\n");
    printVector(vec,100);
    printf("\nThe sum of the vector is %f", sum(vec,100));
    printf("\nThe average of the vector is %f", average(vec,100));

    return EXIT_SUCCESS;
}
