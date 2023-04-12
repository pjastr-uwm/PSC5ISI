#include <stdio.h>
#include <stdlib.h>

int dlugosc1(char* napis)
{
    int i;
    for(i=0;napis[i] != 0;i++)
    {

    }
    return i;
}

int dlugosc2(char* napis)
{
    int i=0;
    while(napis[i] !=0)
    {
        i++;
    }
    return i;
}

int main()
{
    char n1[20] = "ABCDEF";
    printf("%d\n", dlugosc1(n1));
    printf("%d\n", dlugosc2(n1));
    return 0;
}
