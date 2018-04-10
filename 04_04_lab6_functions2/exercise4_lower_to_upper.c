#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Program that converts a lower case string into upper case */

void lower_to_upper(char* word)
{
    int n = strlen(word);
    int i = 0;

    while (i<n)
    {
        word[i] = toupper(word[i]);
        i++;
    }

    *word;
}

int main()
{
      char word[80];

      printf("This program converts words to upper case.\n");
      printf("Please write a word: ");

      scanf("%s",word);

      lower_to_upper(&word);

      printf("%s",word);

    return 0;
}
