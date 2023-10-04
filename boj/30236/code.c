#include <stdio.h>

int main()
{   
    int t;
    scanf("%d", &t);

    int n, a;
    for(int i=0;i<t;i++) {
        scanf("%d", &n);

        int x = 0;
        for(int i=0;i<n;i++) {
            scanf("%d", &a);
            
            x += 1;
            if(x == a) x += 1;
        }

        printf("%d\n", x);
    }

    return 0;
}
