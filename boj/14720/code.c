#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x, s = 0;
    for(int i=0,j=0;i<n;i++, j %= 3) {
        scanf("%d", &x);

        if(x == j) j++, s++;
    }

    printf("%d", s);

    return 0;
}
