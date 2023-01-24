#include <stdio.h>

int main()
{
    int n, k, a, b;
    scanf("%d %d %d %d", &n, &k, &a, &b);
    
    printf("%d %d", ((k - 1) + (n - 1)) * b, (n - 1) * a);
    
    return 0;
}
