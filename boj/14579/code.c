#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int s = 1;
    for(int i=a;i<=b;i++)
        s = s * (i * (i + 1) / 2) % 14579;

    printf("%d", s);

    return 0;
}
