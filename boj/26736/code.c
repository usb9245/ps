#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    
    for(char c;~(c = getchar());) {
             if(c == 'A') a++;
        else if(c == 'B') b++;
    }
    
    printf("%d : %d", a, b);
    
    return 0;
}
