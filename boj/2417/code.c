#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    
    for(__int128_t i=1, j=n, half, hpow;;) {
        half = i + ((j - i) / 2);
        hpow = half * half;
        
        if(hpow == n) {
            printf("%lld", (long long int)half);
            return 0;
        }
        
        else if(j - i <= 1) {
            printf("%lld", (long long int)j);
            return 0;
        }
        
        else if(hpow < n) i = half;
        else if(hpow > n) j = half;
    }
    
    return 0;
}
