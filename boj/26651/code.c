#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);
    
    if(x <= 1) {
        puts(x ? "ABCDEFGHIJKLMNOPQRSTUVWXYZ": "ASDF");
        return 0;
    }

    int a = 2, z = 1, bc = 0, m = 0x7FFFFFFF;
    int sq = (int)sqrt(x) + 1;
    for(int i=1;i<sq;i++) {
        if((i + (x / i) + (x % i * 26)) < m) {
            a = i;
            z = (x / i);
            bc = (x % i);
            m = a + z + (bc * 26);
        }
    }
    
    for(int i=0;i<bc;i++)
        printf("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    
    for(int i=0;i<a;i++) putchar('A');
    printf("BCDEFGHIJKLMNOPQRSTUVWXY");
    for(int i=0;i<z;i++) putchar('Z');
    
    return 0;
}
