#include <stdio.h>

int st[31];

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    
    int su = 0;
    for(int i=0;i<n;i++) {
        scanf("%d", &st[i]);
        su += st[i];
    }
    
    int p = d / su;
    
    for(int i=0;i<n;i++)
        printf("%d\n", st[i] * p);
    
    return 0;
}
