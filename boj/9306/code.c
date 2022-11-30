#include <stdio.h>

int main()
{
    int n;
    scanf("%d ", &n);

    char name[2][21];
    for(int i=1;i<=n;i++) {
        scanf("%s %s", name[0], name[1]);
        printf("Case %d: %s, %s\n", i, name[1], name[0]);
    }

    return 0;
}
