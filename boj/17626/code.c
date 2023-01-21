#include <stdio.h>
#include <stdbool.h>

inline int min(int a, int b) { return a < b ? a : b; }

int main()
{
    int n;
    scanf("%d ", &n);

    int m = 4;
    for(long long int i=1;(i * i) <= n;i++) 
        for(long long int j=0;j <= i && ((i * i) + (j * j)) <= n;j++) 
            for(long long int k=0;k <= j && ((i * i) + (j * j) + (k * k)) <= n;k++) 
                for(long long int l=0;l <= k && ((i * i) + (j * j) + (k * k) + (l * l)) <= n;l++) 
                    if(((i * i) + (j * j) + (k * k) + (l * l)) == n) 
                        m = min(m, (bool)i + (bool)j + (bool)k + (bool)l);

    printf("%d", m);
    
    return 0;
}
