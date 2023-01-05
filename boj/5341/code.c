#include <stdio.h>

int p[102];

int main()
{
    for(int i=1;i<=100;i++) p[i] = p[i - 1] + i;
    
    int n;
    for(;~scanf("%d", &n);) {
        if(n == 0) return 0;
        
        printf("%d\n", p[n]);
    }
    
    return 0;
}
