#include <stdio.h>
#include <stdlib.h>


int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", N);

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<1+N*2; j++)
        {
            int a = 0 - i + N;
            int b = 0 + i + N;
            if (j >= a && j <= b)
                printf("*");
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int i=N-2; i>=0; i--)
    {
        for (int j=0; j<1+N*2; j++)
        {
            int a = 0 - i + N;
            int b = 0 + i + N;
            if (j >= a && j <= b)
                printf("*");
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}