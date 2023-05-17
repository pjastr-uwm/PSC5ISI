#include <stdio.h>
#include <stdlib.h>

enum zwierzak { PIES=-2, KOT, CHOMIK, PAPUGA};

int main()
{
    enum zwierzak zmienna = CHOMIK;
    printf("%d\n", zmienna);
    if (zmienna == CHOMIK)
    {
        printf("CHOMIK\n");
    }
    printf("%Iu\n", sizeof(enum zwierzak));
    return 0;
}
