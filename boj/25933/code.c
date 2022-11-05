#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int u[3], r[3];
    bool count = false;
    for(int i=0;i<n;i++, count = false) {
        scanf("%d %d %d %d %d %d", &u[0], &u[1], &u[2], &r[0], &r[1], &r[2]);
        printf("%d %d %d %d %d %d\n", u[0], u[1], u[2], r[0], r[1], r[2]);

        if( (u[0] + u[1] + u[2]) > (r[0] + r[1] + r[2]) ) 
            count = true;
        
             if(u[0] > r[0])
            puts(count ? "both" : "color");
        else if(u[0] == r[0] && u[1] > r[1])
            puts(count ? "both" : "color");
        else if(u[0] == r[0] && u[1] == r[1] && u[2] > r[2])
            puts(count ? "both" : "color");
        else
            puts(count ? "count" : "none");

        putchar('\n');
    }

    return 0;
}
