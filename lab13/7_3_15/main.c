#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * znajdz(struct element * lista, int a)
{
    struct element * wsk= lista->next;
    while((wsk!=NULL) && (wsk->i!=a))
    {
        wsk=wsk->next;
    }
    return wsk;
}
void wyswietlListeZGlowa(struct element * lista)
{
    if (lista->next == NULL)
    {
        printf("Lista jest pusta\n");
        return;
    }
    struct element * wsk = lista->next;
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
    lista->next = malloc(sizeof(struct element));
    lista->next->i = -2;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 8;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = 7;
    lista->next->next->next->next = NULL;
    wyswietlListeZGlowa(lista);
    printf("%p\n", znajdz(lista, 22));
    return 0;
}
