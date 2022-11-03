#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    while(a < 5 && b < 5) {
        b += a;
        if(b >= 5) {
            puts("yt");
            return 0;
        }
        
        a += b;
        if(a >= 5) {
            puts("yj");
            return 0;
        }
    }
    
    return 0;
}
