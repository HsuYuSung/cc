#include <stdio.h>

#define N 20

char digit_to_hex(int n)
{
    return "0123456789ABCDE"[n];
}

int main(void)
{
    printf("%c\n", digit_to_hex(12));

    char arr[N];
    return 0;
}