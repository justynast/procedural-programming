#include <stdio.h>
#include <stdlib.h>

/* Function that calculates area of the circle */

float const pi = 3.14;

float circle_area(float r)
{
    float a = pi * r * r;
    return a;
}

int main()
{
    float i,x;

    printf("Input the radius of a circle: \n");
    scanf("%f", &i);

    x = circle_area(i);

    printf("Area of the circle is %f", x);

    return 0;
}
