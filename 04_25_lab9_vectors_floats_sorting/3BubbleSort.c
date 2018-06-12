/* exercise 9-2.c */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

void printVector(int* a, int n)
{
	int i;
	for ( i=0; i<n; i++ )
	{
		printf("%2i:  %2i\n",i+1, a[i]);
	}
}

void bubbleSort(int*vec, int dim)
{
    int i;
    int n=dim;
    while (n>0)
    {
        for (i=1; i<n; i++)
        {
            int temp = vec[i-1];
            if (vec[i-1]>vec[i])
            {
                vec[i-1] = vec[i];
                vec[i] = temp;
            }
        }
        n -= 1;
    }
}


int main()
{
	const int dim = 6;
	int vec[dim];

	printf("Please enter %i integer numbers below\n", dim);

	int i;
	for (i=0; i<dim; i++){
        printf("%i: ", i+1);
        scanf("%i", &vec[i]);
	}

    printf("\nYour vector before sorting:\n");
	printVector(vec,dim);

	printf("\nSorting...\n");

	bubbleSort(vec, dim);

	printf("Your sorted vector: \n");
	printVector(vec, dim);


	return EXIT_SUCCESS;
}
