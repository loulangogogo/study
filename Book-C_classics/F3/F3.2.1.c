#include "stdio.h"

int main()
{
    unsigned short a = 4;
    printf("%d\n", a);
    printf("%d\n", !a);
    goto sss;
    printf("%d\n", ~a);
    printf("%d\n", 456);
sss:
    printf("%d\n", 123);
    return 0;
}