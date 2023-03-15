#include <stdio.h>
#include <stdlib.h>

void foo(int n, int*w)
{
    *w=n;
}

int main()
{
    int a=5, b=10;
    printf("a=%d, b=%d\n", a,b);
    foo(a,&b);
    printf("a=%d, b=%d\n", a,b);
    return 0;
}
