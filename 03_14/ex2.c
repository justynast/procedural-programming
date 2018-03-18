#include <stdio.h>
#include <stdlib.h>

/* Please write a program that is counting down (for example: 10, 9, 8, . . . , 0). The
starting number should be read from the keyboard. If the number is smaller than
zero, an error message should be printed. Write one program with a for-loop and
one program with a while loop.*/

int main()
{
    int i;
    printf("Input a number greater than zero: ");
    scanf("%i", &i);

    if ( i < 0){
        printf("ERROR: the number is smaller than zero.");
        return 1;
    }

    for(i; i >= 0; i--){
        printf("%i\n", i);
    }

    return 0;
}
