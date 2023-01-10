#include <stdio.h>
#include <stdbool.h>

bool log[200002];

int main()
{
    int n;
    scanf("%d", &n);
    
    int a, b, x = 0;
    for(int i=0;i<n;i++) {
        scanf("%d %d", &a, &b);
        
        if(log[a] == b) x++;
        log[a] = b;
    }
    
    for(int i=1;i<=200000;i++)
        if(log[i] == true) x++;
    
    printf("%d", x);
    
    return 0;
}
