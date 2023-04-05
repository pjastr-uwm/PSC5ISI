#include <stdio.h>
#include <stdlib.h>

double* foo(int n)
{
    return (double*)malloc(n*sizeof(double));
}

int main()
{
    printf("%p\n", foo(4));
    return 0;
}
