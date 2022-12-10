#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int ti, ts = 0;
    for(int i=n;;i++,ts=0) {
        ti = i;
        while(ti > 0) {
            ts += ti % 10;
            ti /= 10;
        }
        
        if(i % ts == 0) {
            printf("%d", i);
            return 0;
        }
    }
    
    return 0;
}
