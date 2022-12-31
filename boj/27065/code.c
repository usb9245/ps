#include <stdio.h>
#include <stdbool.h>

bool a[5002];

int main()
{
    int s = 0;
    for(int i=2;i<5000;i++, s=0) {
        for(int j=1;j<i;j++)
            if(i % j == 0) s += j;
        
        if(i < s) a[i] = true;
    }
    
    int n;
    scanf("%d", &n);
    
    int x;
    bool chk = true;
    for(int i=0;i<n;i++, s = 0, chk = true) {
        scanf("%d", &x);
        
        if(a[x] == true) {
            for(int j=1;j<x;j++)
                if(x % j == 0 && a[j] == true) {
                    chk = false;
                    break;
                }
    
            puts(chk ? "Good Bye" : "BOJ 2022");
        }
        else puts("BOJ 2022");
    }
    
    return 0;
}
