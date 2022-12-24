#include <stdio.h>

int d[1002][1002];
int n, m;

int f(int x, int y)
{
    if(x == n && y == m) return 1;
    if(x > n || y > m) return 0;
    
    if(d[x][y] == -1) {
        long long int rt = 0;
        rt = (rt + f(x + 1,     y)) % 1000000007;
        rt = (rt + f(    x, y + 1)) % 1000000007;
        rt = (rt + f(x + 1, y + 1)) % 1000000007;
        
        d[x][y] = (int)(rt % 1000000007);
    }
    
    return d[x][y];
}

int main()
{
    scanf("%d %d", &n, &m);
    
    for(int i=1;i<=n;i++) 
        memset(d[i], -1, sizeof(d[i]));
    
    printf("%d", f(1, 1));
    
    return 0;
}
