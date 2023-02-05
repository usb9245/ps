#include <stdio.h>

int x[101];

int main()
{
    int n;
    scanf("%d", &n);
    
    int a;
    for(int i=1;i<(n * 2);i++) {
        scanf("%d", &a);
        x[a] += 1;
    }
    
    for(int i=1;i<=n;i++)
        if(x[i] == 1) {
            printf("%d", i);
            return 0;
        }
    
    return 0;
}
