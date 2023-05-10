#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a;
    float b;
    float c;
};

float obwod(struct trojkat arg)
{
    return arg.a +arg.b +arg.c;
}


int main()
{
    struct trojkat tr = {3.4, 2.3, 1.2};
    printf("%f\n", obwod(tr));
    return 0;
}
