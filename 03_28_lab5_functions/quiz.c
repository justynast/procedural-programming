#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char word[80];
    printf("Please input a word: ");
    scanf("%s", word);

    int n = strlen(word);
    int i;

    for (i=0; i<n; i++){

        switch(word[i]){
            case 'a':
                word[i] = 'X';
                break;
            case 'A':
                word[i] = 'X';
                break;
            case 'b':
                word[i] = 'Y';
                break;
            case 'B':
                word[i] = 'Y';
                break;
            default:
                word[i] = word[i];
                }
    }

    printf("%s", word);

    return 0;
}
