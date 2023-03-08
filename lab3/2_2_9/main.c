#include <stdio.h>
#include <stdlib.h>

int potega(int podstawa, int wykladnik)
{
    int wynik=1;
    for(int i=1;i<=wykladnik;i++)
    {
        wynik*=podstawa;
    }
    return wynik;
}

int podlogaPierwiastek(int liczba, int stopien)
{
    int wynik =0;
    for(int i=0;i<liczba;i++)
    {
        if (potega(i, stopien) <= liczba)
        {
            wynik=i;
        }
    }
    return wynik;
}

int main()
{
    printf("%d\n", podlogaPierwiastek(2,3));
    printf("%d\n", podlogaPierwiastek(5,3));
    printf("%d\n", podlogaPierwiastek(8,3));
    printf("%d\n", podlogaPierwiastek(9,3));
    return 0;
}
