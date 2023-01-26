#include <stdio.h>

inline long long int max(long long int a, long long int b) { return a > b ? a : b; }

int main()
{
    long long int m, n;
    scanf("%lld %lld", &m, &n);
    
    printf("%lld", (m * n) - (max(0, m - 2) * max(0, n - 2)));
    
    return 0;
}
