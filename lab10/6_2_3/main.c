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

void zwolnij(int **tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    int ** tablica = alokuj(4,5);
    printf("%p\n", tablica);
    zwolnij(tablica, 4,5);

    // tak nie robimy!
    //int tablica2[2][3] = {{2,3,4},{-2,3,4}};
    //zwolnij(tablica2, 2, 3);
    return 0;
}
