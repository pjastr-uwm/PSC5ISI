#include <stdio.h>
#include <stdlib.h>

struct punktn
{
    int wymiar;
    float * punkt;
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i].wymiar = tab1[i].wymiar;
        tab2[i].punkt = malloc(tab2[i].wymiar * sizeof(float));
        for(int j=0;j<tab1[i].wymiar;j++)
        {
            tab2[i].punkt[j] = tab1[i].punkt[j];
        }
    }
}

void wyswietl(struct punktn tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Element [%d]\n", i);
        for(int j=0;j<tab[i].wymiar;j++)
        {
            printf("%f ", tab[i].punkt[j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    struct punktn p1;
    p1.wymiar =2;
    p1.punkt = (float[]) {2,3};
    struct punktn p2;
    p2.wymiar =3;
    p2.punkt = (float[]) {1,-7,6};
    struct punktn p3;
    p3.wymiar =4;
    p3.punkt = malloc(4*sizeof(float));
    p3.punkt[0] = 4;
    p3.punkt[1] = -2;
    p3.punkt[2] = 3;
    p3.punkt[3] = 7;
    struct punktn tab[] = {p1,p2,p3};
    struct punktn tab2[] =
    {
        { 2, (float[]) {2,3}},
        { 5, (float[]) {1,-3,3,0,8}},
        { 1, (float[]) {1}}
    };
    wyswietl(tab, 3);
    wyswietl(tab2, 3);
    przepisz(tab,tab2,3);
    wyswietl(tab, 3);
    wyswietl(tab2, 3);
    return 0;
}
