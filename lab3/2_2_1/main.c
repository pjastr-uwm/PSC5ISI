#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n>0)
        return n;
    return -n;
}

int main()
{
    printf("%d\n", foo(-5));
    printf("%d\n", foo(0));
    printf("%d\n", foo(7));
    return 0;
}
