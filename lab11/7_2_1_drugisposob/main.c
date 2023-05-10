#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float a;
    float b;
    float c;
} trojkat;

float obwod(trojkat arg)
{
    return arg.a +arg.b +arg.c;
}


int main()
{
    trojkat tr = {3.4, 2.3, 1.2};
    printf("%f\n", obwod(tr));
    return 0;
}
