#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void wyczysc1(char* napis)
{
    napis[0] = '\0';
}

void wyczysc2(char* napis)
{
    napis[0] = 0;
}

void wyczysc3(char* napis)
{
    *napis =0;
}

void wyczysc4(char* napis)
{
    *napis = '\0';
}

void wyczysc5(wchar_t * napis)
{
    *napis=0;
}

int main()
{
    char n1[] = "ABC";
    printf("%s.\n", n1);
    wyczysc1(n1);
    printf("%s.\n", n1);
    wchar_t n2[] = L"ABC";
    wprintf(L"%s.\n", n2);
    wyczysc5(n2);
    wprintf(L"%s.\n", n2);
    return 0;
}
