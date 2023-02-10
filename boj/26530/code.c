#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int x, q;
    double p, s = 0.0;
    for(int i=0;i<n;i++,s=0.0) {
        scanf("%d", &x);
        
        for(int j=0;j<x;j++) {
            scanf("%*s %d %lf", &q, &p);
            s += p * q;
        }
        
        printf("$%0.2lf\n", s);
    }
    
    return 0;
}
