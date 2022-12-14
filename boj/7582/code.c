#include <stdio.h>

inline int min(int a, int b) { return a < b ? a : b; }

char bn[6];

int main()
{
    for(int z, p, s, a, b;;) {
        scanf("%s %d", bn, &z);
        if(bn[0] == '#' && bn[1] == '\0' && z == 0) return 0;
        scanf("%d %d", &p, &s);

        for(int i=0;i<s;i++) {
            scanf("%d %d ", &a, &b);

            p -= a;
            p = min(p + b, z);
        }

        printf("%s %d\n", bn, p);
    }

    return 0;
}
