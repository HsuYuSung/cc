#include <stdio.h>
#define LEN 50

void empty_array(int[], int);
void print_array(int[], int);

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(a[0]);

    print_array(a, len);
    empty_array(a, len);
    print_array(a, len);

    return 0;
}

void empty_array(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        a[i] = 0;
    }
}

void print_array(int a[], int len)
{
    printf("array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
}