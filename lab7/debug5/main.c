#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b;
}

int main()
{
    int tab[] = {-3,1,-4,1,2,-3,0,-2,3,9,1,0,2};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=1
    int c = b+2; // b=1  , c=3
    int d = foo(&b,&c); // b=1  , c=3  , d=-2
    int e = (wsk+=-1)[3]; // b=1  , c=3  , d=-2  , e=-3
    e = (d -= 2) - (c += 2); // b=1  , c=5  , d=-4  , e=-9
    c = d + (b+=4); // b=5  , c=1  , d=-4  , e=-9
    b = *wsk + e; // b=-13  , c=1  , d=-4    , e=-9
    b= (--c)-(d++);  // b=4  , c=0  , d=-3  , e=-9
    return 0;
}
