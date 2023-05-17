#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Osoba
{
    char imie[20];
    int wiek;
};

struct Osoba initOsoba(char im[20], int wk)
{
    struct Osoba temp;
    //strcpy(temp.imie, im);
    int i;
    for(i=0;im[i]!=0;i++)
    {
        temp.imie[i] =  im[i];
    }
    temp.imie[i]=0;
    temp.wiek = wk;
    return temp;
}

void pokazOsoba(struct Osoba arg)
{
    printf("Imie: %s, wiek; %d\n", arg.imie, arg.wiek);
}

void urodziny(struct Osoba * wsk)
{
    wsk->wiek++;
}

int main()
{
    struct Osoba zmienna = initOsoba("Jan", 26);
    pokazOsoba(zmienna);
    urodziny(&zmienna);
    pokazOsoba(zmienna);
    return 0;
}
