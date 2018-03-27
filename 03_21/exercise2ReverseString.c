#include <stdio.h>
#include <stdlib.h>

/* Reverse a string */

int main()
{
    char word[80];
    printf("Please input a word: ");
    scanf("%s",word);

    int s = strlen(word);
    int i = s-1;

    printf("while: ");
    while( i>= 0){
        printf("%c", word[i]);
        i--;
    }

    return 0;
}
