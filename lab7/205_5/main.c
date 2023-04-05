#include <stdio.h>
#include <stdlib.h>

void foo(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        if (*(tab+i) < 0)
        {
            *(tab+i)=0;
        }
    }
}

void wyswietl(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n", *(tab+i));
    }
    printf("---\n");
}

int main()
{
    int * tab = malloc(4*sizeof(int));
    *tab = 2;
    *(tab+1) =-3;
    *(tab+2) =11;
    *(tab+3) =-24;
    wyswietl(4, tab);
    foo(4, tab);
    wyswietl(4, tab);
    return 0;
}
