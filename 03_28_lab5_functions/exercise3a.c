#include <stdio.h>
#include <stdlib.h>


void mult(int x, int y, int u, int *z)
{
    *z = x * y * u;
}


int main()
{
    int a, b, c, d;
    a = 0;

    printf("First number: ");
    scanf("%i", &b);

    printf("Second number: ");
    scanf("%i", &c);

    printf("Third number: ");
    scanf("%i", &d);

    mult(b, c, d, &a);


    printf("\nThe product of the numbers is %i", a);


    return 0;
}
