#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a, d, g;
    int max = 0, t;
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &a, &d, &g);
        
        t = a * (d + g);
        if(a == (d + g)) t *= 2;
        
        if(t > max) max = t;
    }
    
    printf("%d", max);
    
    return 0;
}
