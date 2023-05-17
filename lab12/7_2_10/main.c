#include <stdio.h>
#include <stdlib.h>

union super_int
{
    int a;
    unsigned int b;
};

int main()
{
    union super_int zmienna;
    zmienna.b=-1;
    printf("%d\n", zmienna.b);
    printf("%u\n", zmienna.b);
    return 0;
}
