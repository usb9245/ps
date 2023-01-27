#include <stdio.h>

inline int min(int a, int b) { return a < b ?  a : b; }
inline int abs(int n)        { return n < 0 ? -n : n; }

int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    
    printf("%d", (min(n, m) * 2) + (abs(n - m) % 2));
    
    return 0;
}
