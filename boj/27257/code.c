#include <stdio.h>

int main()
{
    for(char c;~(c = getchar());) if(c != '0') break;
    
    int n = 0, x = 0;
    for(char c;~(c = getchar());) {
        if(c < '0' || '9' < c) break;
        
        if(c == '0') x++;
        else {
            n += x;
            x = 0;
        }
    }
    
    printf("%d", n);
    
    return 0;
}
