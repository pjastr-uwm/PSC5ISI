#include <stdio.h>
#include <stdlib.h>

void zamiana(int a, int b)
{
    int temp =a;
    a=b;
    b=temp;
    printf("a=%d, b=%d\n", a,b);
}

int main()
{
    int a=5, b=10;
    printf("a=%d, b=%d\n", a,b);
    zamiana(a,b);
    printf("a=%d, b=%d\n", a,b);
    return 0;
}
