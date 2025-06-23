#include "stdio.h"
#include "unistd.h"

int a = 1;

// 全局变量和静态变量是存储在一个位置的，静态变量其实和全局变量基本一样，只是代码作用域不一样

void fun()
{
    static int b = 1;
    int c = 1;

    a++;
    b++;
    c++;
    printf("a = %d,%p | b = %d,%p | c = %d,%p\n", a, &a, b, &b, c, &c);

    sleep(1);
    fun();
}

int main()
{
    fun();
    return 0;
}