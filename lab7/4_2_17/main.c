#include <stdio.h>
#include <stdlib.h>

double * kopia(int n, double tab[])
{
    double * temp = (double*)malloc(n* sizeof(double));
    if (temp == NULL)
        return NULL;
    for(int i=0;i<n;i++)
    {
        temp[i] = tab[i];
    }
    return temp;
}

void wyswietl(int n, double tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%lf\n", tab[i]);
    }
    printf("---\n");
}

int main()
{
    double tab[] = {2.3, -2.1, 3.4};
    wyswietl(3,tab);
    double * tab2 = kopia(3, tab);
    if (tab2 == NULL)
        return 1;
    wyswietl(3,tab2);
    tab[1] = 11.2;
    wyswietl(3,tab);
    wyswietl(3,tab2);
    return 0;
}
