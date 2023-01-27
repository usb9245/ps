#include <stdio.h>

inline int min(int a, int b) { return a < b ? a : b; }

int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    
    printf("%d", (min(n, m) * 2) + (((n + m) - (min(n, m) * 2)) % 2));
    
    return 0;
}
