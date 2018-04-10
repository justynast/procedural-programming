#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Program that changes characters in strings */

void change(char* word)
{
    int n = strlen(word);
    int i = 0;

    for (i=0;i<n;i++)
    {
        switch(word[i])
        {
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
                word[i] = 'X';
                break;
            case 'd':
            case 'D':
            case 'e':
            case 'E':
            case 'f':
            case 'F':
                word[i] = 'Y';
                break;
            default:
                word[i] = word[i];
        }

    }

    *word;
}

int main()
{
      char word[80];

      printf("Please write a word: ");

      scanf("%s",word);

      change(&word);

      printf("Changed: %s",word);

    return 0;
}
