#include <stdio.h>

char st[101];

int main()
{
    int n;
    scanf("%d %s", &n, st);
    
    int x = 0;
    for(int i=0,j=(n-1);i<j;i++,j--)
        if(st[i] != st[j]) x += 1;
    
    printf("%d", x);
    
    return 0;
}
