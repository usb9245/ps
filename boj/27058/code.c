#include <stdio.h>

int k[26];

int main()
{
    for(int i=0;i<26;i++)
        k[i] = getchar() - 'a';
    
    getchar();
    
    char c;
    for(;~(c=getchar());) {
             if('A' <= c && c <= 'Z')
            putchar(k[c - 'A'] + 'A');
        else if('a' <= c && c <= 'z')
            putchar(k[c - 'a'] + 'a');
        else
            putchar(c);
    }
    
    return 0;
}
