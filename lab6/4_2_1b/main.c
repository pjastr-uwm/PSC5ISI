#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i] = i;
    }
}

void wyswietlTablice(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n",i, tab[i]);
    }
}

int main()
{
    int tab2[] = {-3,2,3,9,11};
    wyswietlTablice(5,tab2);
    foo(5, tab2);
    wyswietlTablice(5,tab2);
    return 0;
}
