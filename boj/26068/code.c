#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int x, a = 0;
    for(int i=0;i<n;i++) {
        scanf(" D-%d", &x);
        
        if(x <= 90) a++;
    }
    
    printf("%d", a);
    
    return 0;
}
