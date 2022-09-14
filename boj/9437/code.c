#include <stdio.h>

inline int abs(int n) { return n < 0 ? -n : n; }

int main()
{
    int n, p;
    
    while(~scanf("%d", &n)) {
        if(n == 0) return 0;
        scanf("%d", &p);

        if(p == n) printf("1 2 %d\n", n - 1);
        else if(p % 2 == 0) {
            if(p > (n / 2)) printf("%d %d %d\n", (n - p) + 1, (n - p) + 2, p - 1);
            else printf("%d %d %d\n", p - 1, (n - p) + 1, (n - p) + 2);
        }
        else {
            if(p > (n / 2)) printf("%d %d %d\n", abs(p - n), abs(p - n) + 1, p + 1);
            else printf("%d %d %d\n", p + 1, (n - p), (n - p) + 1);
        }
    }

    return 0;
}
