#include <stdio.h>
#include <stdlib.h>

struct Punkt
{
    float a,b,c;
};

void przepisz(struct Punkt tab1[], struct Punkt tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i] = tab1[i];
    }
}

void wyswietl(struct Punkt tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d] = %f, %f, %f\n",i, tab[i].a, tab[i].b, tab[i].c);
    }
    printf("---\n");
}

int main()
{
    struct Punkt tab1[4] =
    {
        {2,2,3},{1,2,3}, {3,-4,7},{3,-10,9}
    };
    struct Punkt tab2[4] =
    {
        {4,-5,5},{2,8,33}, {2,3,4},{11,22,3}
    };
    wyswietl(tab1, 4);
    wyswietl(tab2, 4);
    przepisz(tab1, tab2, 4);
    wyswietl(tab1, 4);
    wyswietl(tab2, 4);
    return 0;
}
