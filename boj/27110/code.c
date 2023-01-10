#include <stdio.h>

int n;
inline int min(int x) { return n < x ? n : x; }

int main()
{
    int a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    
    printf("%d", min(a) + min(b) + min(c));
    
    return 0;
}
