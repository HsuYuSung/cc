#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
    int b[N] = {1,2,3,4,5,6,7,8,9,10};
    int i, big, small;

    max_min(b, N, &big, &small);

    printf("min: %d\n", small);
    printf("max: %d\n", big);
}

void max_min(int a[], int n, int *max, int *min) {
    int i;

    *max = *min = a[0];

    for (int i=0; i<n; i++) {
        if (a[i] < *min)
            *min = a[i];
        if (a[i] > *max)
            *max = a[i];
    }
}

