#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%c%d", "abcdefgh"[(n - 1) % 8], (n + 7) / 8);
    
    return 0;
}
