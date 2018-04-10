#include <stdio.h>
#include <stdlib.h>


int sum1(int x, int y, int u)
{
    int z = x + y + u;
    return z;
}



int main()
{
    int a, b, c, d;
    d = 0;

    printf("Input a: ");
    scanf("%i", &a);
    printf("Input b: ");
    scanf("%i", &b);
    printf("Input c: ");
    scanf("%i", &c);

    d = sum1(a,b,c);

    printf("The sum of a and b and c is %i\n", d);

    return 0;
}
