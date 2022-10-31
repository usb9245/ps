#include <stdio.h>

int t[201];

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    
    for(int i=0;i<n;i++)
        scanf("%d", &t[i]);
    
    for(int i=0;;(i = (i+1) % n), x++)
        if(t[i] < x) {
            printf("%d", i + 1);
            return 0;
        }

    return 0;
}
