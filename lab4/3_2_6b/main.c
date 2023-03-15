#include <stdio.h>
#include <stdlib.h>

void foo(int n, int*w)
{
    *w=n;
}

int main()
{
    int a=5;
    int b=8;
    printf("a=%d, b=%d\n", a,b);
    int * wsk;
    wsk = &b;
    foo(a, wsk);
    printf("a=%d, b=%d\n", a,b);
    return 0;
}
