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


    for (fahr = lower; fahr <= upper; fahr += step){
        cels = 5 * (fahr-32) / 9;
        printf("%8.2f\t%8.2f\n", fahr, cels);
    }

    return 0;
}
