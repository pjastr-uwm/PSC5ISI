#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * znajdz(struct element * lista, int a)
{
    struct element * wsk= lista;
    while((wsk!=NULL) && (wsk->i!=a))
    {
        wsk=wsk->next;
    }
    return wsk;
}

void wyswietlListeBezGlowy(struct element * lista)
{
    if (lista == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }
    struct element * wsk = lista;
    while(wsk != NULL)
    {
        printf("%d, adres: %p\n", wsk->i, wsk);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->i =3;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = -8;
    lista->next->next = NULL;
    printf("%p\n", znajdz(lista, -8));
    wyswietlListeBezGlowy(lista);
    return 0;
}
