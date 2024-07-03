#include <stdio.h>
#include <string.h>

void remove_filename(char *url)
{
    char *p = url;
    int n_slash = 0;

    while (*p++)
    {
        if (*p == '/')
        {
            n_slash++;
        }

        if (n_slash > 2)
        {
            *p = '\0';
        }
    }
}

int main(void)
{
    char t[100] = "http://www.knking.com/index.html";
    remove_filename(t);
    printf("%s\n", t);
    return 0;
}
