#include <stdio.h>

#define N 2
#define M 4

void array_2d();

int main(void)
{
    // int arr[N][M] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8}};

    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < M; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    array_2d();

    return 0;
}

void array_2d()
{
    int arr[][M] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {3, 4, 5, 6}, {3, 43, 5, 56}};
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}