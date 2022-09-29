#include <stdio.h>

char st[101];

int main()
{
    int n, s = 0, t = 0;
    
    scanf("%d ", &n);
    
    for(int i=0;i<n;i++) {
        st[i] = getchar();
        
             if(st[i] == 's') s++;
        else if(st[i] == 't') t++;
    }
    
    int idx = 0;
    
    while(s != t) {
             if(st[idx] == 's') s--;
        else if(st[idx] == 't') t--;
        
        idx += 1;
    }
    
    for(int i=idx;i<n;i++)
        putchar(st[i]);
	
    return 0;
}
