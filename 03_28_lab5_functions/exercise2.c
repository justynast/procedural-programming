#include <stdio.h>
#include <stdlib.h>


void sum2(int x, int y, int u, int *z)
{
    *z = x + y + u;
}


int main()
{
    int a, b, c, d;
    c = 0;

    printf("Input a: ");
    scanf("%i", &a);

    printf("Input b: ");
    scanf("%i", &b);

    printf("Input d: ");
    scanf("%i", &d);

    sum2(a, b, d, &c);

    printf("The sum is %i", c);


    return 0;
}
