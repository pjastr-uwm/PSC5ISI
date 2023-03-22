#include <stdio.h>
#include <stdlib.h>

int foo(int (*wsk1)(int),int (*wsk2)(int), unsigned int n)
{
    for(int i=0;i<=n;i++)
    {
        if (wsk1(i) != wsk2(i))
        {
            return 0;
        }
    }
    return 1;
}

int pom1(int x)
{
    return x+5;
}

int pom2(int x)
{
    return (x+5)%10;
}

int main()
{
    printf("%d\n", foo(pom1, pom2, 2));
    printf("%d\n", foo(pom1, pom2, 8));
    return 0;
}
