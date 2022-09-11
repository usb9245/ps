#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1,s=0;i<=n;i++,s=0) {
        for(int j=1,x;j<=10;j++) {
            scanf("%d", &x);
            if(((j - 1) % 5 + 1) == x) s++;
        }

        if(s == 10) printf("%d ", i);
    }

    return 0;
}
