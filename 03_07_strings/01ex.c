#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myUni[80];
    char pg[] = "politechnika";
    printf("At which Uni do you study? ");
    scanf("%s", myUni);

    if ( strcmp(pg,myUni) == 0)
    {
        printf("Very good choice! Welcome!\n");
    } else{
        printf("I don't know this place");
        }

    char whatField[20];
    char physics[] = "physics";
    printf("What do you study?");
    scanf("%s", whatField);

    if  (strcmp (whatField,physics) == 0)
    {
        printf("Congratulations on studying %s", physics);
    }

    return 0;
}


