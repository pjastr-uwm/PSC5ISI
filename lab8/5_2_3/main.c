#include <stdio.h>
#include <stdlib.h>

int dlugosc(wchar_t* napis)
{
    int i=0;
    while(napis[i] !=0)
    {
        i++;
    }
    return i;
}

int porownaj(wchar_t*napis1, wchar_t*napis2)
{
    int d1 = dlugosc(napis1);
    int d2 = dlugosc(napis2);
    if (d1!= d2)
        return 0;
    for(int i=0;i<d1;i++)
    {
        if (napis1[i] != napis2[i])
            return 0;
    }
    return 1;
}

int porownaj2(wchar_t*napis1, wchar_t*napis2)
{
    int i;
    for(i=0;napis1[i] !=0 && napis2[i] !=0;i++)
    {
        if(napis1[i]!= napis2[i])
            return 0;
    }
    if(napis1[i] != 0)
        return 0;
    if(napis2[i] != 0)
        return 0;
    return 1;
}

int main()
{
    wchar_t n1[] = L"ABC";
    wchar_t n2[] = L"ABCd";
    wchar_t*n3 = malloc(sizeof(wchar_t) *4);
    n3[0] = 'A';
    n3[1] = 'B';
    n3[2] = 'C';
    n3[3] = '\0';
    wprintf(L"%d\n", porownaj(n1,n2));
    wprintf(L"%d\n", porownaj(n1,n3));
    wprintf(L"%d\n", porownaj2(n1,n2));
    wprintf(L"%d\n", porownaj2(n1,n3));
    return 0;
}
