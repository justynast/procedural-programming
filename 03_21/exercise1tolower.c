#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()

{
      char word[80];
      int i,n;

      printf("This program converts words to lower case.\n");
      printf("Please write a word: ");

      scanf("%s",word);

      printf("Your input is: %s\n",word);
      n = strlen(word);

      printf("The length of the word is: %d\n",n);

      i = 0;
      while (i<n) {
            word[i] = tolower(word[i]);
            i++;
      }

      printf("Your word in lower case is: %s\n",word);

      return 0;

}
