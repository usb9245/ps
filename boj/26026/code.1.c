#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int s, c = 0, l = 0;
    for(int i=0;i<n;i++) {
        scanf("%1d", &s);
        
        if(s == 1) c = 2, l++;
        else if(c > 0) c--, l++;
    }
    
    printf("%d", l);
    
    return 0;
}
