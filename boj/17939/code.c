#include <stdio.h>

int x[100001];

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
        scanf("%d", &x[i]);
    
    int earn = 0, m = 0;
    for(int i=(n-1);i>=0;i--) {
        if(x[i] <= m) earn += (m - x[i]);
        else if(x[i] > m) m = x[i];
    }
    
    printf("%d", earn);
    
    return 0;
}
