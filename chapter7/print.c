#include <stdio.h>

void test_get_num()
{
    // char c;
    // int i;
    // int j;
    // scanf("%d%c%d", &i, &c, &j);
    // printf("c is: %c", c);
    // printf("i is: %d", i);
    // printf("j is: %d", j);

    unsigned int a = 10;
    signed int b = -17;
    unsigned int c = a + b;
    printf("%u", c);
}

void test_get_char()
{
    int i;
    puts("Enter an integer: ");
    scanf("%d", &i);
    printf("%d", i);
    puts("Enter a command: ");
    char command = getchar();
    printf("%c", command);
}

void test_print()

{

    float n = 10000000000000000000.0;

    printf("%e\n", n);
    printf("%le\n", n);
    printf("%f\n", n);
    printf("%lf\n", n);
    printf("%g\n", n);
    printf("%lg\n", n);

    printf("ok\n");
    printf("%.2e\n", n);
    printf("%.2le\n", n);
    printf("%.2f\n", n);
    printf("%.2lf\n", n);
    printf("%.2g\n", n);
    printf("%.2lg\n", n);

    char a = 'a';
    // putchar('\n');
    // putchar(\n');
    // // puts('\n');
    // puts("\n");
    // puts("");

    while (getchar() != '\n')
        ;

    char ch;
    ch = getchar();
    char command;

    printf("ok%c", ch);
}

int main(int argc, char *argv[])
{
    test_get_num();
    return 0;
}