#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b) ((a)>(b)) ? (a) : (b)
#define year (1 * 365 * 24 * 60 * 60)
#define SECONDS_PER_YEAR (60 * 60 * 24 * 365)


union Data {
    int i;
    float f;
    char str[20];
} data;

void count()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p=a;
    *(p++) += 123;
    *(++p) += 123;
}

void count1()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = (int *)(&a+1);
}

char* swap

char* reverse_string(char* s)
{
    int length = strlen(s);


}

int main()
{

    printf("Memory size occupied by data: %lu\n", sizeof(data));
    printf("%d", MAX(8, 7));
    printf("%d", SECONDS_PER_YEAR);

    printf("\n");
    return 0;
}