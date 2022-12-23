#include <stdio.h>

int main()
{
    long long int c = 0, ast = 0, zst = 0, st = 0;
    char s;
    for(; ~(s=getchar()) ;) {
        if(s == (st + 'A' + 1)) {
            if(s == 'Z') zst += 1;
            st += 1;
        }
        else if(s == (st + 'A')) {
            if(s == 'Z') zst += 1;
            if(s == 'A') ast += 1;
        }
        else {
            c += ast * zst;
            st = ast = zst = 0;
            if(s == 'A') ast += 1;
        }
    }
    
    c += ast * zst;
    
    printf("%lld", c);
    
    return 0;
}
