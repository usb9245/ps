#include <stdio.h>

int main()
{
    double m, a, b;
    int r;
    for(;~scanf("%lf %lf %lf", &m, &a, &b);) {
        if(m <= 0.0 && a <= 0.0 && b <= 0.0) return 0;
        
        r = (int)((m * 3600 / a) - (m * 3600 / b) + 0.5);
        
        printf("%d:%02d:%02d\n", r / 3600, r % 3600 / 60, r % 60);
    }
    
    return 0;
}
