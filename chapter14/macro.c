#include <stdio.h>

#define N 20
#define ECHO(s)            \
    do                     \
    {                      \
        scanf("%s", s);    \
        printf("%s\n", s); \
    } while (0)

int main()
{
    char str[30];

    if (1 != 1)
        ECHO(str);
    else
        printf("80");

    printf("%s, %s", __DATE__, __TIME__);

    return 0;
}