#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char anotherString[] = "This is a new day";
    int size = strlen(anotherString);
    char theString[size];

    strncpy(theString, anotherString, size);

    printf("%s", theString);
    printf("\n");


    return 0;
}