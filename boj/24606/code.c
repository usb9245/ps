#include <stdio.h>

int pow(int x) { return (x < 2) ? ((x < 1) ? 1 : 2) : (2 * pow(x - 1)); }

char a[5], b[5];

int main()
{
    scanf("%s %s", a, b);
    
    int s = 4;
    for(int i=0;i<4;i++)
        if(a[i] == b[i]) s -= 1;
    
    printf("%d", pow(s));
    
    return 0;
}
