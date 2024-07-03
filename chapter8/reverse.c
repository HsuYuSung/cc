#include <stdio.h>
#define N 10

int main(void)
{
    printf("insert ten numbers: \n");
    int arr[10];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("reverse: ");
    for (int i = N - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}