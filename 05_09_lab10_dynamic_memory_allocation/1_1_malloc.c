/* example10-1.c */
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int dim;
	float* vec;

	printf("How many numbers do you want to enter? ");
	scanf("%d",&dim);

	/* allocate memory */
	vec = (float *) malloc(dim * sizeof(float));

	/* check, if memory allocation was successful */
	if (vec == NULL)
	{
		printf("ERROR: memory allocation was not successful!\n");
		return EXIT_FAILURE;
	}

	int i;
	for (i=0; i<dim; i++)
	{
		printf("%d ",i+1);
		scanf("%f",&vec[i]);
	}

	/* release memory */
	free(vec);

	return EXIT_SUCCESS;
}
