#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myUniversity[80];
    char pg[] = "politechnika";
    char ug[] = "uniwersytet";
    char sgh[] = "sgh";
    char swps[] = "swps";

    printf("At which university do you study? ");
    scanf("%s", myUniversity);

    if (strcmp(pg, myUniversity) == 0)
    {
        printf("Very good choice! Welcome! \n");
    }
    else if (strcmp(ug, myUniversity) == 0)
    {
        printf("Oh no, wrong choice. \n");
    }
    else if (strcmp(sgh, myUniversity) == 0)
    {
        printf("Congratulations. \n");
    }
    else if (strcmp(swps, myUniversity) == 0)
    {
        printf("Analize me. \n");
    }
    else
    {
        printf("I don't know this place.");
    }
    return 0;
}
