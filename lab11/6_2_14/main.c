#include <stdio.h>
#include <stdlib.h>

int foo(int tab[][10][10])
{
    int suma =0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<10;k++)
            {
                suma += tab[i][j][k];
            }
        }
    }
    return suma;
}

int main()
{
    int tab[10][10][10] = {{{2,5}}};
    printf("%d\n", foo(tab));
    return 0;
}
