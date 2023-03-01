#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    scanf("%d", &liczba);
    int i;
    for(i=0;i*i<=liczba;i++)
        ;
    printf("czesc calkowitka z pierwiastka=%d\n", i-1);
    return 0;
}
