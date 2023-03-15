#include <stdio.h>
#include <stdlib.h>

int foo(int const*a, int const*b)
{
    return *a+*b;
}

int main()
{
    int a =3, b=7;
    printf("%d\n", foo(&a,&b));
    return 0;
}
