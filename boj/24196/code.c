#include <stdio.h>

int main()
{
    int c;
    for(;~(c = getchar());) {
        putchar(c);

        for(c -= 'A';c-- && ~getchar(););
    }
    
    return 0;
}
