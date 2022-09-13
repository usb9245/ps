#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = 0, n = 0, x = 0;
    for(int i=1;i<=b;i++) {
        if(--x <= 0) x = ++n;
        if(a <= i) sum += n;
    }

    printf("%d", sum);

    return 0;
}
