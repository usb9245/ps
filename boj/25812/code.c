#include <stdio.h>

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    
    int a = 0, b = 0, x;
    for(int i=0;i<n;i++) {
        scanf("%d", &x);
        
             if(x + r > x * 2) a++;
        else if(x + r < x * 2) b++;
    }
    
    putchar(a == b ? '0' : a > b ? '1' : '2');
    
    return 0;
}
