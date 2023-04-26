#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int n, int m)
{
    int ** tab = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        tab[i] = malloc(m*sizeof(int));
    }
    return tab;
}

int main()
{
    int ** tablica = alokuj(4,5);
    printf("%p\n", tablica);
    return 0;
}
