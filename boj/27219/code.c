#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    while(n  >= 5) putchar('V'), n -= 5;
    while(n-- > 0) putchar('I');
    
    return 0;
}
