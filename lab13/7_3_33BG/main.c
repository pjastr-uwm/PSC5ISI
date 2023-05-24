#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * przesun(struct element * lista)
{
    if ((lista==NULL) || (lista->next==NULL))
        return lista;
    struct element * wsk=lista;
    while(wsk->next->next!=NULL)
    {
        wsk=wsk->next;
    }
    struct element * przedostatni = wsk;
    struct element * ostatni = przedostatni->next;
    ostatni->next = lista;
    przedostatni->next = NULL;
    return ostatni;
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
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 11;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -22;
    lista->next->next->next->next = NULL;
    wyswietlListeBezGlowy(lista);
    lista=przesun(lista);
    wyswietlListeBezGlowy(lista);
    return 0;
}
