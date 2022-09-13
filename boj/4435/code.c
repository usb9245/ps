#include <stdio.h>

int main()
{	
    int t;
    scanf("%d", &t);

    int g, gl[6] = { 1, 2, 3, 3, 4, 10 };
    int s, sl[7] = { 1, 2, 2, 2, 3, 5, 10 };

    int x;
    for(int i=1;i<=t;i++) {
        g = s = 0;

        for(int j=0;j<6;j++) {
            scanf("%d", &x);
            g += x * gl[j];
        }

        for(int j=0;j<7;j++) {
            scanf("%d", &x);
            s += x * sl[j];
        }

        printf("Battle %d: ", i);

        if(g != s) puts(g > s ? "Good triumphs over Evil" : "Evil eradicates all trace of Good");
        else puts("No victor on this battle field");
    }

    return 0;
}
