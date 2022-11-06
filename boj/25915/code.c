#include <stdio.h>

int abs(int x) { return x < 0 ? -x : x; }

int main()
{
    printf("%d", abs('I' - getchar()) + 84);
    
    return 0;
}
