#include <stdio.h>

int t[1200002];

int main()
{
    int n, q, x;

    scanf("%d %d", &n, &q);

    int now = 0;
    for(int i=1;i<=n;i++) {
        scanf("%d", &x);

        for(int j=now;j<(now + x);j++) t[j] = i;

        now += x;
    }
    
    for(int i=0;i<q;i++) {
        scanf("%d", &x);
        printf("%d ", t[x]);
    }
	
    return 0;
}
