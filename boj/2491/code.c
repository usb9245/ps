#include <stdio.h>

int max(int a, int b) { return a > b ? a : b; }

int main()
{
    int n;
    scanf("%d", &n);
    
    int pre, bc = 1, sc = 1;
    scanf("%d", &pre);
    
    int x, tb = 1, ts = 1;
    for(int i=1;i<n;i++) {
        scanf("%d", &x);
        
        if(pre <= x) tb += 1;
        else         tb  = 1;
        
        if(x <= pre) ts += 1;
        else         ts  = 1;
        
        bc = max(bc, tb);
        sc = max(sc, ts);
        pre = x;
    }
    
    printf("%d", max(bc, sc));
    
    return 0;
}
