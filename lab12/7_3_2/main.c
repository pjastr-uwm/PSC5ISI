#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * wyczysc(struct element * lista)
{
    struct element * wsk = lista;
    struct element * wsk2=wsk;
    while(wsk!=NULL)
    {
        wsk=wsk->next;
        free(wsk2);
        wsk2 = wsk;
    }
    return NULL;
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
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->i = 8;
    lista->next = malloc(sizeof(struct element));
    lista->next->i =-9;
    lista->next->next =NULL;
    wyswietlListeBezGlowy(lista);
    lista = wyczysc(lista);
    wyswietlListeBezGlowy(lista);
    return 0;
}
