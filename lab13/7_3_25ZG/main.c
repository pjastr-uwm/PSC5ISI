#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

int minimum(struct element * lista)
{
    int temp = lista->next->i;
    struct element * wsk = lista->next->next;
    while(wsk!= NULL)
    {
        if (temp > wsk->i)
        {
            temp = wsk->i;
        }
        wsk=wsk->next;
    }
    return temp;
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
    printf("%d\n", minimum(lista));
    return 0;
}
