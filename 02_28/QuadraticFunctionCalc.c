#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Quadratic function y = Ax^2 + Bx + C\n");
    // declare int variables
    int a, b, c;
    printf("Input A:");
    scanf("%i", &a);
    printf("Input B:");
    scanf("%i", &b);
    printf("Input C:");
    scanf("%i", &c);

    // a can't equal 0 if function is quadratic
    if (a != 0){

        // calculate delta of the function
        int delta;
        delta = b * b - 4 * a * c;
        printf("Delta = %i \n", delta);


        if (delta < 0){
            printf("Delta is lesser than zero. Your quadratic function has no roots.");
        }

        else if (delta >= 0){

            // calculate square root of delta for further calculations

            double value = delta;
            double result;

            result = sqrt(value);

            printf("Square root of delta is %f \n", result);

            if (delta==0){
                // calculate root
                float x;
                x = (-b)/(2*a);
                printf("Function has one root, x = %f\n", x);}

            else {
                // calculate roots
                float y;
                float z;
                y = ((-b) - result)/(2*a);
                z = ((-b) + result)/(2*a);
                printf("Function has two roots, x = %f and x = %f\n", y,z);
            }

        }
    }

    // if a=0 function is not quadratic
    else{
        printf("This is not a quadratic function!");
    }

    return 0;
}
