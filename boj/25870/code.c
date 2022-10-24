#include <stdio.h>

int cnt[26];

int main()
{
    char c;

    while(~(c = getchar())) 
        if('a' <= c && c <= 'z') cnt[c - 'a'] += 1;
    
    int f;
    for(int i=0;i<26;i++)
        if(cnt[i] > 0) {
            f = i;
            break;
        }

    for(int i=1;i<26;i++) 
        if((cnt[i] > 0) && ((cnt[f] % 2) != (cnt[i] % 2))) {
            putchar('2');
            return 0;
        }
    
    printf("%d", cnt[f] % 2);

    return 0;
}
