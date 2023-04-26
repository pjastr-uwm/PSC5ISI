#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j] =0;
        }
    }
}

void wyswietl(int n, int m, int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d, %d]=%d\n", i, j, tab[i][j]);
        }
    }
}


int main()
{
    int n =4, m=3;
    int ** tab = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        tab[i] = malloc(m*sizeof(int));
    }
    foo(tab, n, m);
    wyswietl(n,m, tab);
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);
    return 0;
}
