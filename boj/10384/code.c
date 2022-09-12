#include <stdio.h>

int p[26];

int main()
{
    int n;
    scanf("%d ", &n);

    char c;
    for(int i=1;i<=n;i++) {
        memset(p, 0, sizeof(p));

        while(~scanf("%c", &c)) {
            if(c == '\n') break;

                 if('a' <= c && c <= 'z') p[c - 'a']++;
            else if('A' <= c && c <= 'Z') p[c - 'A']++;
        }

        int m = 3;
        for(int i=0;i<26;i++) m = (p[i] < m ? p[i] : m);

        printf("Case %d: ", i);

             if(m == 0) puts("Not a pangram");
        else if(m == 1) puts("Pangram!");
        else if(m == 2) puts("Double pangram!!");
        else if(m == 3) puts("Triple pangram!!!");
    }

    return 0;
}
