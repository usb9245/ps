#include <stdio.h>

int main()
{	
    int s;

    while(~scanf("%d", &s)) {
        if(s == 0) return 0;
        printf("%d ", s);
        
        while(s >= 10) {
            int x = 1;

            while(s > 0) {
                x *= s % 10;
                s /= 10;
            }

            printf("%d ", x);
            s = x;
        }

        putchar('\n');
    }

    return 0;
}
