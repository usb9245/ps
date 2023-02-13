#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++) {
        if(i % 7 == 0 || i % 11 == 0) 
            puts(i % 7 == 0 ? (i % 11 == 0 ? "Wiwat!" : "Hurra!") : "Super!");
        else printf("%d\n", i);
    }
    
    return 0;
}
