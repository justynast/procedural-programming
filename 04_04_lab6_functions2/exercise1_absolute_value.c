#include <stdio.h>
#include <stdlib.h>

/* Function that returns absolute value of a number */

int absValue(int x)
{
    if(x>=0){
        return x;
    }
    else{
        return -x;
    }
}

int main()
{
    int i, a;
    printf("Input a number: \n");
    scanf("%i", &i);

    a = absValue(i);

    printf("Absolute value of %i is %i",i,a);

    return 0;
}
