#include <stdio.h>

int s[2002];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    for(int i=0;i<n;i++)
        scanf("%d", &s[i]);
    
    int t;
    for(int i=0;i<n;i++)
        for(int j=0;j<(n+m);j++) {
            scanf("%d", &t);
            
            s[j] += t;
            s[i] -= t;
        }
    
    for(int i=0;i<(n+m);i++)
        printf("%d ", s[i]);
    
    return 0;
}
