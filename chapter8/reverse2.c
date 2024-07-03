#include <stdio.h>
#define N 10

void show_arr(int arr[], int size);
void show_reverse_arr();
void show_reverse_pointer_arr();
int *reverse_arr(int arr[], int size);
void reverse_pointer_arr(int *arr, int size);
void swap(int *q, int *p);

int main()
{
    show_reverse_arr();
    show_reverse_pointer_arr();
    return 0;
}

void show_reverse_arr()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9};

    int size = sizeof(arr) / sizeof(arr[0]);
    int *reversed = reverse_arr(arr, size);
    printf("reverse arr!\n");
    show_arr(reversed, size);
}

void show_reverse_pointer_arr()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse_pointer_arr(arr, size);
    printf("reverse_pointer arr!\n");
    show_arr(arr, size);
}

void show_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n\n");
}

int *reverse_arr(int arr[], int size)
{
    static int reversed[100];
    int j = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        reversed[j++] = arr[i];
    }
    return reversed;
}

void reverse_pointer_arr(int *arr, int size)
{
    int j = size;
    for (int i = 0; i < size / 2; i++)
    {
        swap(&arr[i], &arr[size - i - 1]);
    }
}

void swap(int *q, int *p)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}