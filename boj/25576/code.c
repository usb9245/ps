#include <stdio.h>

inline int abs(int n) { return n < 0 ? -n : n; }

int l[101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    for(int i=0;i<m;i++)
        scanf("%d", &l[i]);
    
    int k, t = (n / 2);
    for(int i=1;t && i<n;i++) {
        int dif = 0;
        
        for(int i=0;i<m;i++) {
            scanf("%d", &k);
            dif += abs(l[i] - k);
        }
        
        if(dif > 2000) t -= 1;
    }
    
    puts(t <= 0 ? "YES" : "NO");
	
    return 0;
}
