#include <stdio.h>

inline int max(int a, int b) { return a > b ? a : b; }
inline int min(int a, int b) { return a < b ? a : b; }

int main()
{
    int y, m;
    scanf("%d %d", &y, &m);
    
    m += (y * 12);
    
    int ca = (min(m, 12) * 15) + (min(max(0, m - 12), 12) * 9) + (max(0, m - 24) * 4);
    
    printf("%d %d", ca / 12, ca % 12);
    
    return 0;
}
