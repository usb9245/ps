#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    double v = 0.0, a;
    for(int i=0;i<n;i++) {
        scanf("%lf", &a);
        
        v = 1.0 - (1.0 - v) * (1.0 - (a / 100));
        
        printf("%lf\n", v * 100);
    }
    
    return 0;
}
