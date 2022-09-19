#include <stdio.h>

inline int abs(int n) { return n < 0 ? -n : n; }

int main()
{
    int x, s = 0, m = 0;

    for(int i=0;i<10;i++) {
        scanf("%d", &x);
        s += x;

        m = (abs(100 - s) <= abs(100 - m) ? s : m);
    }

    printf("%d", m);

    return 0;
}
