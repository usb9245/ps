#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int i, f;
    for(int j=0;j<n;j++) {
        scanf("%d %d", &i, &f);
        
        puts(((i <= 1 && f <= 2) || (i <= 2 && f <= 1)) ? "Yes" : "No");
    }
    
    return 0;
}
