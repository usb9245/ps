#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int a;
    int prep = 0, preb = 0, preu = 0, b = 0;
    for(int i=0;i<n;i++) {
        scanf("%d", &a);
        
        if(prep == a) b += (preu * 2);
        else b += 2;
        
        preu = (b - preb);
        
        if(b >= 100) prep = preb = preu = b = 0;
        else prep = a, preb = b;
    }
    
    printf("%d", b);
	
    return 0;
}
