#include <stdio.h>
#include <stdlib.h>


int main()
{
    printf("Hello world!\n");
    printf("Input a number ");
    int a;
    scanf("%i", &a);
    int b;
    printf("Please input another number: ");
    scanf("%i", &b);

    int c;
    c = a + b;
    printf("%i plus %i is %i.\n", a,b,c);

    // + plus
    // - minus
    // / divided by
    // * multiply
    // % modulo


    int d;
    d = a % b;
    printf("%i modulo %i is %i.\n", a, b, d);

    if (d==0){
            printf("We can divide %i by %i.\n", a,b);
            printf("Good bye!\n");
            }
    else {
            printf("We cannot divide these two numbers.\n");
            printf(":( \n");
    }

    int e;
    e = a - b;
    printf("%i minus %i is %i.\n", a, b, e);

    int f;
    f = a / b;
    printf("%i divided by %i is %i.\n", a, b, f);

    int g;
    g = a * b;
    printf("%i miltiplied by %i is %i.\n", a, b, g);

    float pi;
    printf("Please enter pi: ");
    scanf("%f", &pi);
    printf("The value of pi is %f.\n", pi);
    if (pi == 3.14f){
        printf("Correct!\n");
    }

    int sum = a + b + c + d;
    printf("The sum of a, b, c and d is %i \n", sum);

    float average = sum * 1.0 / 4;
    printf("The average of a, b, c and d is %f.\n", average);

    return 0;
}
