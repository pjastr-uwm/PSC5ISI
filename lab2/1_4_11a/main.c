#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if (a<0)
    {
        a*=-1;
    }
    if (c>d)
    {
        printf("0\n");
    }
    else
    {
        int i;
        for(i=0;a*i*i+b*i+c<=d;i++)
        {
            ;
        }
        printf("%d\n",i);
    }
    return 0;
}
