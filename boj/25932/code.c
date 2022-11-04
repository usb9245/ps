#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x;
    bool zack, mack;
    for(int i=0;i<n;i++, zack = mack = false) {
        for(int j=0;j<10;j++) {
            scanf("%d", &x);
            printf("%d ", x);

                 if(x == 17) zack = true;
            else if(x == 18) mack = true;
        }
        putchar('\n');

        if(zack == mack) puts(zack ? "both" : "none");
        else             puts(zack ? "zack" : "mack");

        putchar('\n');
    }

    return 0;
}
