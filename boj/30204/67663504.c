#include <stdio.h>

int main()
{   
    int n, x;
    scanf("%d %d", &n, &x);
    
    int s = 0, p;
    for(int i=0;i<n;i++) {
        scanf("%d", &p);
        
        s += p;
    }
    
    printf("%d", !(s % x));
    
    return 0;
}
