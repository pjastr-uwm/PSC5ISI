#include <stdio.h>
#include <stdlib.h>

int * foo9()
{
    return malloc(sizeof(int));
}

int * foo11(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int * wsk = foo9();
    printf("%p\n", wsk);
    int * wsk2 = foo11(3);
    printf("%p\n", wsk2);
    printf("%Iu\n", sizeof(wsk2));
    return 0;
}
