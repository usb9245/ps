#include <stdio.h>

inline long long int absLL(long long int n) { return n < 0 ? -n : n; }

int main()
{
    int n;
    scanf("%d", &n);

    long long int sx, sy, ex, ey;
    scanf("%lld %lld %lld %lld", &sx, &sy, &ex, &ey);

    long long int mdis = 0x7FFFFFFFFFFFFFFFLL;
    int oem = 0, m;
    for(int i=1;i<=n;i++) {
        scanf("%d", &m);

        long long int dis = 0;
        long long int x, y, nx = sx, ny = sy;

        for(int j=0;j<m;j++) {
            scanf("%lld %lld", &x, &y);

            dis += absLL(nx - x) + absLL(ny - y);
            nx = x, ny = y;
        }

        dis += absLL(ex - nx) + absLL(ey - ny);

        if(dis < mdis) oem = i, mdis = dis;
    }

    printf("%d", oem);

    return 0;
}
