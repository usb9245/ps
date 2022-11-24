#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int w = 0;
    for(int i=1;i<=n && i<=5;i++)
        for(int j=0;j<=i && (i+j)<=n;j++)
            if(i + j == n) w++;
    
    printf("%d", w);
    
    return 0;
}
