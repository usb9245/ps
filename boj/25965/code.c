#include <stdio.h>

int mi[101][3];
inline long long int max(long long int a, long long int b) { return a > b ? a : b; }

int main()
{
    int n;
    scanf("%d", &n);

    int m;
    long long int k, d, a;
    for(int i=0;i<n;i++) {
        scanf("%d", &m);

        for(int j=0;j<m;j++)
            scanf("%d %d %d", &mi[j][0], &mi[j][1], &mi[j][2]);
        
        scanf("%lld %lld %lld", &k, &d, &a);

        long long int mo = 0;
        for(int j=0;j<m;j++)
            mo += max(0, (k * mi[j][0]) - (d * mi[j][1]) + (a * mi[j][2]));
        
        printf("%lld\n", mo);
    }

    return 0;
}
