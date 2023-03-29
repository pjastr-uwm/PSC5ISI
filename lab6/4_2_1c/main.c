#include <stdio.h>
#include <stdlib.h>

void foo(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i) *=2;
    }
}
void wyswietlTablice(int n, int * tab)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n",i, *(tab+i));
    }
}
int main()
{
    int *tab = malloc(3*sizeof(int));
    *tab = 3;
    *(tab+1) = 4;
    *(tab+2) = 5;
    wyswietlTablice(3,tab);
    foo(3, tab);
    wyswietlTablice(3,tab);
    return 0;
}
