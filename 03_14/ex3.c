#include <stdio.h>
#include <stdlib.h>

/* Modify your program for counting down. If the number is smaller than zero, the
program should count to zero upwards. For example: -10, -9, -8, . . . , 0*/

int main()
{
    int i;
    printf("Input a number: ");
    scanf("%i", &i);

    if ( i > 0){

        for(i; i >= 0; i--){
            printf("%i\n", i);
        }

    }

    else {

        for(i; i <= 0; i ++){
            printf("%i\n", i);
        }
    }

    return 0;
}
