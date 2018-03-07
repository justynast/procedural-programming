#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myUniversity[80];
    char pg[] = "politechnika";
    char ug[] = "uniwersytet";

    printf("At which university do you study? ");
    scanf("%s", myUniversity);

    if (strcmp(pg, myUniversity) == 0)
    {
        printf("Very good choice! Welcome! \n");
        char myStudy[80];
        char ph[] = "physics";
        printf("What do you study? ");
        scanf("%s", myStudy);
        if ( strcmp(ph,myStudy) == 0)
        {
            printf("That's interesting!\n");
        } else
        {
            printf("You should switch to Physics!");
        }

        char ans[10];
        char y[] = "yes";
        printf("Do you like PG? ");
        scanf("%s", ans);

        if ( strcmp (y, ans) == 0)
        {
            printf("Good.");
        }
        else
        {
            printf("I know you love it.");
        }

    }
    else if (strcmp(ug, myUniversity) == 0)
    {
        printf("Oh no, wrong choice. \n");
    }
    else
    {
        printf("I don't know this place.");
    }
    return 0;
}
