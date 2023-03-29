#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b)
{
    int temp =*a;
    * a = *b;
    *b = temp;
}

void foo(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        if (tab1[i]<tab2[i])
            zamiana(&tab1[i], &tab2[i]);
        if (tab2[i]<tab3[i])
            zamiana(&tab2[i], &tab3[i]);
        if (tab1[i]<tab2[i])
            zamiana(&tab1[i], &tab2[i]);
        if (tab2[i]<tab3[i])
            zamiana(&tab2[i], &tab3[i]);
    }
}

void wyswietlTablice(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n",i, tab[i]);
    }
    printf("---\n");
}

int main()
{
    int tab1[] = {3,2,-4,5,-2};
    int tab2[] = {0,3,4,5,6};
    int tab3[] = {11,-22,4,0,0};
    wyswietlTablice(5,tab1);
    wyswietlTablice(5,tab2);
    wyswietlTablice(5,tab3);
    foo(5, tab1, tab2, tab3);
    printf("po\n");
    wyswietlTablice(5,tab1);
    wyswietlTablice(5,tab2);
    wyswietlTablice(5,tab3);
    return 0;
}
