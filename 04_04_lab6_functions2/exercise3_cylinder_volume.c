#include <stdio.h>
#include <stdlib.h>

/* Program that calculates volume of a cylinder */

float const pi = 3.14;


int absValue(int x) /* calculates an absolute value of a number */
{
    if(x>=0){
        return x;
    }
    else{
        return -x;
    }
}


float cylinder_volume(float r, float h) /* calculates the volume */
{
    float a = pi * r * r * h;
    return a;
}

int main()
{
    float i,x,v;

    printf("Input the radius of the cylinder: ");
    scanf("%f", &i);

    printf("Input the height of the cylinder: ");
    scanf("%f", &x);

    i = absValue(i); /* to make sure these aren't negative numbers */
    x = absValue(x);

    v = cylinder_volume(i,x);

    printf("Volume of the cylinder is %f", v);

    return 0;
}
