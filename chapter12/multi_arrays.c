#include <stdio.h>

#define NUM_ROWS 2
#define NUM_COLUMNS 4

int main()
{

    // a[i] is equivalent to *(a+i)
    // &a[i][0] is equivalent to &(*(a[i]+0)) and same as &(*(*(a+i)+0))

    int a[NUM_ROWS][NUM_COLUMNS] = {0}, (*p)[NUM_COLUMNS], i = 2;

    for (p = &a[0]; p < &a[NUM_ROWS]; p++)
    {
        (*p)[i] = 1;
    }

    int *t;

    for (int r = 0; r < NUM_ROWS; r++)
    {
        printf("\n");
        for (int c = 0; c < NUM_COLUMNS; c++)
            printf("%d ", a[r][c]);

        return 0;
    }
}