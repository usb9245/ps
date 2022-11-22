#include <stdio.h>

int main()
{
    int n;
    scanf("%d ", &n);
    
    char s;
    int c = 0, l = 0;
    for(int i=0;i<n;i++) {
        s = getchar();
        
        if(s == '1') c = 2, l++;
        else if(c > 0) c--, l++;
    }
    
    printf("%d", l);
    
    return 0;
}
