#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    double rate = 0.0, r;
    for(int i=0;i<k;i++) {
        scanf("%lf", &r);
        rate += r;
    }
    
    printf("%lf %lf", (rate + -3.0 * (n - k)) / n, (rate + 3.0 * (n - k)) / n);
    
    return 0;
}
