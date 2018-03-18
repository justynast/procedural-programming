#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, cels, lower, upper, step;

    printf("Input the lowest temperature: ");
    scanf("%f", &lower);

    printf("Input the highest temperature: ");
    scanf("%f", &upper);

    printf("Input the step: ");
    scanf("%f", &step);

    if ( step < 0 ){
        printf("ERROR: the step size is negative.\n");
        return 1;
    }

    if ( lower > upper ){
        printf("ERROR: lowest number has to be lower than highest number.");
        return 1;
    }

    for (fahr = lower; fahr <= upper; fahr += step){
        cels = 5 * (fahr-32) / 9;
        printf("%8.2f\t%8.2f\n", fahr, cels);
    }

    return 0;
}
