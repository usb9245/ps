#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int lt, wt, le, we;
    for(int i=0;i<n;i++) {
        scanf("%lld %lld %lld %lld", &lt, &wt, &le, &we);

        if((lt * wt) == (le * we)) puts("Tie");
        else puts((lt * wt) > (le * we) ? "TelecomParisTech" : "Eurecom");
    }

    return 0;
}
