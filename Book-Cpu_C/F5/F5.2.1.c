#include "stdio.h"
#include "unistd.h"


int a = 1;
int main()
{
    // 打印a的地址和值
    printf("a's address is %p, a's value is %d\n", &a, a);
    // sleep(20);
    return 0; 
}