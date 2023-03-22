#include <stdio.h>
#include <stdlib.h>

double foo(double (*wsk)(int), int x)
{
    return wsk(x);
}

double funkcja_pom(int arg)
{
    return (double)(arg+9);
}

int main()
{
    printf("%lf\n", foo(funkcja_pom, 3));
    return 0;
}
