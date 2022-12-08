#include <stdio.h>

int main()
{
    int n, p, h;
    scanf("%d %d %d", &n, &p, &h);
    
    int x;
    for(int i=0;i<n;i++,p=x) {
        scanf("%d", &x);
        
        if(x < p) printf("NTV: Dollar dropped by %d Oshloobs\n", p - x);
        if(h < x) printf("BBTV: Dollar reached %d Oshloobs, A record!\n", x), h = x;
    }
    
    return 0;
}
