#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int o = 0;

    if( (a + b == c) || (b + c == a) || (c + a == b) ) o += 1;
    if( (a * b == c) || (b * c == a) || (c * a == b) ) o += 2;

    printf("%d", o ? o : 3);

    return 0;
}
