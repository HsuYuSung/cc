#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *s = "Hello world!";

    // printf("%c", "\n");
    // printf("%s", '\n');
    int i, j;
    char str[100];

    strcpy(str, "tire-bouchon");
    printf("%s\n", str);
    strcpy(&str[4], "d-or-wi");
    printf("%s\n", str);
    strcat(str, "red?");
    printf("%s\n", str);

    return 0;
}