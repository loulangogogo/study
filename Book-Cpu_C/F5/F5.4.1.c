#include "stdio.h"

volatile int a = 0;

int task1()
{
    while(a>1)
    {
        printf("进入了循环");
    }
    return 1;
}