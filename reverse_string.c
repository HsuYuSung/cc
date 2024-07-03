#include <stdio.h>
#include <stdlib.h>

// char* ReverseString(char* s)
// {
//     int length = strlen(s);

//     for (int i=0; i<length/2; i++)
//     {
//         char tmp;
//         tmp = s[i];
//         s[i] = s[length -1 - i];
//         s[length - 1 -i] = tmp;
//     }

//     return s;
// }

// char* reverseString(char *s)
// {
//     size_t length = strlen(s);
//     char a, b;
//     for (int i=0; i<length/2; i++)
//     {
//         a = s[i];
//         b = s[length-1-i];
//         s[i] = b;
//         s[length-i-1] = a;
//     }
//     return s;
// }

// reverseString2(char *s)
// {
//     char s[1000], r[1000];
//     int begin

// }

int main()
{
    char *s = "abcdef";
    reverseString(s);

    printf("%s", s);
    
    return 0;
}