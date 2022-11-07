#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

int main()
{
    int f, a, n;
    scanf("%d %d %d", &f, &a, &n);
    
    int x;
    for(int i=0;i<n;i++) {
        scanf("%d", &x);
        printf("%d %d\n", x, (min(x, 1000) * f) + (max(0, x - 1000) * a));
    }
    
    return 0;
}
