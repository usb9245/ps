#include <stdio.h>

char s[11];
int c[4];

int main()
{
    int n;
    scanf("%d ", &n);

    int x;
    for(int i=0;i<n;i++) {
        scanf("%s %d", s, &x);
        
             if(s[0] == 'S') c[0] += x;
        else if(s[0] == 'B') c[1] += x;
        else if(s[0] == 'L') c[2] += x;
        else if(s[0] == 'P') c[3] += x;
    }

    for(int i=0;i<4;i++) 
        if(c[i] == 5) {
            puts("YES");
            return 0;
        }
    
    puts("NO");
    
    return 0;
}
