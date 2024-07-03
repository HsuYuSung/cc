#include <stdio.h>
#define OO int (*)(int, int)

typedef int (*OP)(int, int);

int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

void print_pointer(void)
{
    char s[] = "0113256";
    char *p = s;

    printf("%c", *p++); // 0
    printf("%c", *(p++)); // 1
    printf("%c", (*p)++); // 1
    printf("%c", *++p); // 2
    printf("%c", *(++p)); // 5
    printf("%c", ++*p); // 6
    printf("%c", ++(*p)); // '\0

    printf("\n");
    printf("%s", s);

}

void test_op()
{
    int (*op)(int a, int b);
    op = add;
    printf("op add %d\n", op(1, 4));
    op = mul;
    printf("op mul %d\n", op(4, 5));

    OP OPOP;
    OPOP = add;
    printf("OPOP add %d\n", OPOP(1, 4));
    OPOP = mul;
    printf("OPOP mul %d\n", OPOP(4, 5));
}

int main()
{
    print_pointer();
    return 0;
}