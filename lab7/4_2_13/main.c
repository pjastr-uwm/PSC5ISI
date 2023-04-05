#include <stdio.h>
#include <stdlib.h>

int* foo(int n)
{
    return (int*)malloc(n*sizeof(int));
}

int main()
{
    printf("%p\n", foo(4));
    return 0;
}
