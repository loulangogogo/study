#include "stdio.h"

int main()
{
    char *a[] = {"abc","def","hij","klm"};
    char **p = a;

    printf ("%c\n",a[2][1]);
    printf ("%c\n",*(*(p+2)+1));
    return 0; 
}