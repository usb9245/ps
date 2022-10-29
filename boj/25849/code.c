#include <stdio.h>

int main()
{
    int c[6], b[6] = { 1, 5, 10, 20, 50, 100 };
    
    int max = 0;
    for(int i=0;i<6;i++) {
        scanf("%d", &c[i]);
        c[i] *= b[i];
        
        if(c[i] > max) max = c[i];
    }
    
    for(int i=5;i>=0;i--)
        if(c[i] == max) {
            printf("%d", b[i]);
            return 0;
        }
    
    return 0;
}
