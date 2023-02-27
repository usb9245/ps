#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int x, a, pa = 0;
    bool good = true;
    for(int i=0;i<n;i++) {
        scanf("%d", &x);
        
        printf("Denominations: ");
        
        pa = 0, good = true;
        for(int j=0;j<x;j++) {
            scanf("%d", &a);
            printf("%d ", a);
            
            if(pa * 2 > a) good = false;
            pa = a;
        }
        
        printf("\n%s coin denominations!\n\n", good ? "Good" : "Bad");
    }
    
    return 0;
}
