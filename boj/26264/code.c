#include <stdio.h>

char st[800001];

int main()
{
    int n;
    scanf("%d %s", &n, st);
    
    int b = 0, s = 0;
    for(int i=0,j=0;i<n;i++) {
             if(st[j] == 'b') b++, j += 7;
        else if(st[j] == 's') s++, j += 8;
    }
    
    puts(b == s ? "bigdata? security!" : (b > s ? "bigdata?" : "security!"));
    
    return 0;
}
