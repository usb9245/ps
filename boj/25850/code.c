#include <stdio.h>

int card[101];

int main()
{
    int p;
    scanf("%d", &p);

    int c, x;
    for(int i=1;i<=p;i++) {
        scanf("%d", &c);

        for(int j=0;j<c;j++) {
            scanf("%d", &x);
            card[x] = i;
        }
    }

    for(int i=10;i<=99;i++) 
        if(card[i]) printf("%c", 'A' - 1 + card[i]);

    return 0;
}
