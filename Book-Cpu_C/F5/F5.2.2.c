#include "stdio.h"
#include "unistd.h"


int a = 2;
int main()
{
    // 打印a的地址和值
    // printf("a's address is %p, a's value is %d\n", &a, a);
    // sleep(10000);
    int *ptr = (int *)0x1000;
    printf("ptr's address is %p, ptr's value is %d\n", ptr, *ptr);
    *ptr= 32;
    printf("ptr's address is %p, ptr's value is %d\n", ptr, *ptr);

    return 0; 
}