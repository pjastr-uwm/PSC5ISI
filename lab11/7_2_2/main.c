#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a;
    float b;
    float c;
};


void foo (struct trojkat troj1, struct trojkat *troj2)
{
    *troj2=troj1;
}

int main()
{
    struct trojkat tr = {2,3,4};
    struct trojkat tr2 = {4,5,6};
    printf("%f %f %f\n", tr.a, tr.b, tr.c);
    printf("%f %f %f\n", tr2.a, tr2.b, tr2.c);
    foo(tr, &tr2);
    printf("Po funkcji\n");
    printf("%f %f %f\n", tr.a, tr.b, tr.c);
    printf("%f %f %f\n", tr2.a, tr2.b, tr2.c);
    return 0;
}
