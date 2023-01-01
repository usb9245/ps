#include <stdio.h>

int a[10002];
char p[3][10] = { "Deficient", "Perfect", "Abundant" };

int main()
{
    for(int i=2,s=0;i<=10000;i++,s=0) {
        for(int j=1;j<i;j++)
            if(i % j == 0) s += j;
        
             if(i >  s) a[i] = 0;
        else if(i == s) a[i] = 1;
        else if(i  < s) a[i] = 2;
    }
    
    int t;
    scanf("%d", &t);
    
    int n;
    for(int i=0;i<t;i++) {
        scanf("%d", &n);
        printf("%s\n", p[a[n]]);
    }
    
    return 0;
}
