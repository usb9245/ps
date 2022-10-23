#include <stdio.h>

int main()
{
    int w, h, d;
    scanf("%d %d %d", &w, &h, &d);
    
    d *= 2;
    w -= d;
    h -= d;
    
    printf("%d", (w < 0 || h < 0) ? 0 : (w * h));

    return 0;
}
