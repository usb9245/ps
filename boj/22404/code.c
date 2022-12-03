#include <stdio.h>

int main()
{
    int n, m, t;
    scanf("%d %d %d", &n, &m, &t);

    int a, lt = 0, nt = -m;
    for(int i=0;i<n;i++) {
        scanf("%d", &a);

        if((nt + (m * 2)) < a) lt += a - (nt + (m * 2));
        nt = a;
    }

    if((nt + m) < t) lt += t - (nt + m);

    printf("%d", lt);

    return 0;
}
