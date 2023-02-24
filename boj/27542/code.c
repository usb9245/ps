#include <stdio.h>

inline int abs(int n) { return n < 0 ? -n : n; }

int a[2002];

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    for(int i=(n-1);i>0;i--)
        for(int j=0;j<i;j++)
            a[j] = abs(a[j] - a[j + 1]);
    
    printf("%d", a[0]);
    
    return 0;
}
