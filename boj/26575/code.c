#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    double d, f, p;
    for(int i=0;i<n;i++) {
        scanf("%lf %lf %lf", &d, &f ,&p);
        
        printf("$%.2lf\n", (d * f) * p);
    }
    
    return 0;
}
