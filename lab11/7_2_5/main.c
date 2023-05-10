#include <stdio.h>
#include <stdlib.h>

struct Punkt10
{
    float tablica[10];
};

void przepisz(struct Punkt10 tab1[], struct Punkt10 tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i] = tab1[i];
    }
}

void wyswietl(struct Punkt10 tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Element [%d]\n", i);
        for(int j=0;j<10;j++)
        {
            printf("%f ", tab[i].tablica[j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    struct Punkt10 tab1[4] =
    {
        {2,3,4,4,2,2,3,-1,2,3},
        {23,3,3,0},
        {20,3,3,3},
        {5}
    };
    struct Punkt10 tab2[4] =
    {
        {333,3},
        {22},
        {22},
        {3,3,-3,5,5,5,5}
    };
    wyswietl(tab1, 4);
    wyswietl(tab2, 4);
    przepisz(tab1, tab2, 4);
    wyswietl(tab1, 4);
    wyswietl(tab2, 4);
    return 0;
}
