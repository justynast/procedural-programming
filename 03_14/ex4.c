#include <stdio.h>
#include <stdlib.h>

/* Please write a program that calculates the sum of of all integer numbers from 1
to 100. Your program should calculated 1 + 2 + 3 + . . . + 100. Please write one
version of your program using a for-loop and one version using a while-loop.*/

int main()
{
    int i;
    int sum = 0;

    for ( i = 1; i <= 100; i++){
        sum += i;
    }

    printf("%i", sum);

    return 0;
}
