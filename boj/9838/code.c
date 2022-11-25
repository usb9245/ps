#include <stdio.h>

int x[20001];

int main()
{
    int n;
    scanf("%d ", &n);

    int t;
    for(int i=1;i<=n;i++) {
        scanf("%d", &t);
        x[t] = i;
    }

    for(int i=1;i<=n;i++)
        printf("%d\n", x[i]);

    return 0;
}
