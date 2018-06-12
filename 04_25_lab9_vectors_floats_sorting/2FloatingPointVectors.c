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

float vectorLength(float* a, int n)
{
    int i;
    float q;
    float vlen = 0;
    float sum = 0;
    for (i=0; i<n; i++)
    {
        q = a[i] * a[i];
        sum += q;
    }

    vlen = sqrt(sum*1.0);

    return vlen;
}

void sum_vecs(float*a, float*b, float*c, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i] = a[i] + b[i];
    }
}

float scalar_prod(float*a, float*b, int n)
{
    float result = 0;
    int i;
    for (i=0; i<n; i++)
    {
        result += a[i] * b[i];
    }

    return result;
}

int main()
{
    const int dim = 10;
    float vec_a[dim];
    float vec_b[dim];
    float vec_c[dim];

    /* seeding the random number generator: */
    srand(time(NULL));

    int i;
    for (i=0; i<dim; i++)
    {
        vec_a[i] = myRand(-1,1);
        vec_b[i] = myRand(-1,1);
    }



    printf("vector a:\n");
    printVector(vec_a,dim);

    printf("\nvector b:\n");
    printVector(vec_b,dim);

    sum_vecs(vec_a, vec_b, vec_c, dim);

    printf("\nvector c=(a+b):\n");
    printVector(vec_c,dim);

    printf("\nLength of vector a: %f \nLength of vector b: %f", vectorLength(vec_a,dim), vectorLength(vec_b,dim));
    printf("\nLength of the vector c: %f", vectorLength(vec_c,dim));

    printf("\nScalar product of a and b: %f", scalar_prod(vec_a, vec_b, dim));

    float l,p;

    l = scalar_prod(vec_a, vec_b, dim);
    p = vectorLength(vec_a, dim) * vectorLength(vec_b,dim);

    printf("\nChecking the Schwartz inequality:\n");
    if (l<=p)
    {
        printf("%f <= %f", l,p);
        printf("\nSchwartz inequality is fulfilled.");
    }
    else
    {
        printf("Something wrong in the code.");
    }


    return EXIT_SUCCESS;
}
