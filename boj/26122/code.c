#include <stdio.h>

inline int max(int a, int b) { return a > b ? a : b; }
inline int min(int a, int b) { return a < b ? a : b; }

int main()
{
    int k;
    scanf("%d ", &k);
    
    int n = 0, s = 0, len = 0;
    char c, pc = '\0';
    for(int i=0;i<k;i++, pc = c) {
        c = getchar();
        
        if(pc != c) {
                 if(c == 'N') n = 0;
            else if(c == 'S') s = 0;
        }
        
             if(c == 'N') n += 1;
        else if(c == 'S') s += 1;
        
        len = max(len, min(n, s) * 2);
    }
    
    printf("%d", len);    
    
    return 0;
}
