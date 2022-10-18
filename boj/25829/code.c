#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int e, v1, v2;
    int ae = 0, av = 0, be = 0, bv = 0;
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &e, &v1, &v2);

        av += v1, bv += v2;

             if(v1 > v2) ae += e;
        else if(v2 > v1) be += e;
    }

         if(av > bv && ae > be) putchar('1');
    else if(av < bv && ae < be) putchar('2');
    else                        putchar('0');

    return 0;
}
