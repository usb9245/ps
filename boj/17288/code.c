#include <stdio.h>

int main()
{
    char c, pc = '\0';
    int n = 0, s = 0;
    
    for(;~(c = getchar());pc = c) {
        if(pc + 1 != c) {
            if(s == 3) n += 1;
            s = 0;
        }
        
        s += 1;        
    }
    
    printf("%d", n);
    
    return 0;
}
