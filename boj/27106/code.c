#include <stdio.h>

int main()
{
    int p;
    scanf("%d", &p);

    int n = 100 - p;

    printf("%d ", n / 25);
    n %= 25;

    printf("%d ", n / 10);
    n %= 10;

    printf("%d %d", n / 5, n % 5);

    return 0;
}
