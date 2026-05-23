#include <stdio.h>
void main()
{
    int x = 10;
    int *p = &x;
    printf("%p\n", &x);
    printf("%d \n", &p);
    printf("%p", &p);
}
