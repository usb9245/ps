#include <stdio.h>

int main()
{
    int g, p, t;
    scanf("%d %d %d", &g, &p, &t);
    
    int pt = (g * p), gt = g + (t * p);
    
    putchar(pt == gt ? '0' : pt < gt ? '1' : '2');
    
    return 0;
}
