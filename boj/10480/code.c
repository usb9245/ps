#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int x;
    for(int i=0;i<n;i++) {
        scanf("%d", &x);
        
        printf("%d is %s\n", x, x % 2 ? "odd" : "even");
    }
    
    return 0;
}
