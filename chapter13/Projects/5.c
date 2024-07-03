#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    size_t sum = 0;
    for (int i = 0; i < argc; i++)
    {
        char str[100];
        strcpy(str, argv[i]);
        printf("%d\n", atoi(str));
        sum += atoi(str);
    }

    printf("sum: %d\n", sum);
    return 0;
}