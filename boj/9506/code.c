#include <stdio.h>
#include <stdbool.h>

bool pb[100002];
int pl[100002][14];

int main()
{
    int n;
    for(int s = 0;;s = 0) {
        scanf("%d", &n);
        if(n == -1) return 0;
        
        printf("%d ", n);
        
        if(pl[n][0] != 1) {
            for(int i=1,k=0;i<n;i++) {
                if(n % i == 0) {
                    s += i;
                    pl[n][k++] = i;
                }
            }
            
            pb[n] = (n == s);
        }
        
        if(pb[n] == true) {
            printf("= 1");
            
            for(int i=1;pl[n][i] != 0;i++)
                printf(" + %d", pl[n][i]);
            
            putchar('\n');
        }
        else puts("is NOT perfect.");
    }
    
    return 0;
}
