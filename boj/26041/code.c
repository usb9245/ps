#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char a[100001][12];
char b[11], inp[1000001];

int main()
{
    int n = 0;    
    for(;~scanf("%s", inp);n++)
        strncpy(a[n], inp, 11);
    
    strcpy(b, a[n - 1]);
    int bl = strlen(b);
    n -= 2;
    
    bool chk = true;
    int cnt = 0;
    for(int i=0;i<=n;i++,chk = true) {
        
        for(int j=0;j<bl;j++)
            if(a[i][j] != b[j] || a[i][j] == '\0') {
                chk = false;
                break;
            }
        
        if(a[i][bl] == '\0') chk = false;
        
        if(chk == true) cnt++;
    }
    
    printf("%d", cnt);

    return 0;
}
