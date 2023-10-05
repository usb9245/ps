#include <stdio.h>

inline int max(int a, int b) { return a > b ? a : b; }

int main()
{
    int n;
    scanf("%d", &n);
    
    int m = 0, c = 0, s;
    for(int i=0;i<n;i++) {
        scanf("%d", &s);
        
        c = (s ? c + 1 : 0);
        m = max(m, c);
    }
    
    printf("%d", m);
    
    return 0;
}
