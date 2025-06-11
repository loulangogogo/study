#include "stdio.h"

int main()
{
    unsigned long a = 0x4869576f726c640a;
    printf("%s", (char *)&a);
    return 0;
}