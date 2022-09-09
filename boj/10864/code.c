#include <stdio.h>

int f[1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int x;
    for(int i=0;i<(m*2);i++) {
        scanf("%d", &x);
        f[x] += 1;
    }

    for(int i=1;i<=n;i++)
        printf("%d\n", f[i]);

    return 0;
}
