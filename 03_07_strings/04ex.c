#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x;
    printf("At which university do you study?\n");
    printf("1 - PG, 2 - UG, 3 - AWFiS\n");
    scanf("%i", &x);

    if (x == 1) {
        printf("Good choice, welcome!\n");
    }
    else if (x == 2) {
        printf("That is also not so bad.\n");
    }
    else if (x==3) {
        printf("That is OK, too.\n");
    }
    else {
        printf("I don't know this place.");
    }

    return 0;
}
