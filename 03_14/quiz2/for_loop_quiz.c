#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 1; i < 101; i++){

        if (i%3==0){
            printf("X");
        }

        else{
            printf("%i", i);
        }

        printf("\n");
    }
    return 0;
}
