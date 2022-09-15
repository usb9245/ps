#include <stdio.h>

inline int max(int a, int b) { return a > b ? a : b; }

int main()
{
    int t, arr[8];
    scanf("%d", &t);

    for(int i=0;i<t;i++) {
        for(int j=0;j<8;j++)
            scanf("%d", &arr[j]);
        
        printf("%d\n", max(arr[0] + arr[4], 1) + (5 * max(arr[1] + arr[5], 1)) + (2 * max(arr[2] + arr[6], 0)) + (2 * (arr[3] + arr[7])));
    }

    return 0;
}
