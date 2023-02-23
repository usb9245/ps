#include <stdio.h>

char s[101];

int main()
{
    int n;
    scanf("%d %s", &n, s);
    
    if(s[n - 1] == 'G') {
        for(int i=0;i<(n-1);i++)
            putchar(s[i]);
    }
    else printf("%sG", s);
    
    return 0;
}
