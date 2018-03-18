#include <stdio.h>
#include <stdlib.h>

/* Please write a program that calculates the sum of of all integer numbers from 1
to 100. Your program should calculated 1 + 2 + 3 + . . . + 100. Please write one
version of your program using a for-loop and one version using a while-loop.*/

int main()
{
    int i = 1;
    int sum = 0;

    while ( i <= 100 ){
        sum += i;
        i++;
    }

    printf("%i", sum);

    return 0;
}
