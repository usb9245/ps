#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a == 0 && b == 0) {
        putchar('0');
        return 0;
    }
    
    int i = 100000;
    while(i > 0) {
        if((a / i) || (b / i) ) break;
        i /= 10;
    }
    
    for(;i>0;i/=10) {
             if((a / i) <= 2 && (b / i) <= 2) putchar('0');
        else if((a / i) >= 7 && (b / i) >= 7) putchar('0');
        else                                  putchar('9');
        
        a %= i, b %= i;
    }
    
    return 0;
}
