#include <stdio.h>

void skip_input(int n) {
    for(int i=0;i<n;i++) scanf("%*d");
}

int main()
{
    int n;
    double a, b;
    
    for(int i=1;~scanf("%d", &n);i++) {
        if(n == 0) return 0;
        
        if(n % 2) {
            skip_input(n / 2);
            scanf("%lf", &a);
            skip_input(n / 2);
            
            printf("Case %d: %0.1lf\n", i, a);
        }
        else {
            skip_input(n / 2 - 1);
            scanf("%lf %lf", &a, &b);
            skip_input(n / 2 - 1);
            
            printf("Case %d: %0.1lf\n", i, (a + b) / 2);
        }
    }
    
    return 0;
}
