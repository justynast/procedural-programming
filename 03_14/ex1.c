#include <stdio.h>
#include <stdlib.h>

/* Please write a program that prints all even numbers (0, 2, 4, . . . , 100) between 0
and 100 to the screen. Write one program with a for-loop and one program with a
while loop. */

int main()
{
    int i;

    for(i=0; i<101; i+= 2){
        printf("%i\n", i);
    }

    return 0;
}
