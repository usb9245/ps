#include <stdio.h>
#include <stdbool.h>

char a[100001];
bool b[26];

int main()
{
    scanf("%s ", a);
    
    char t;
    while(~(t = getchar()))
        if('A' <= t && t <= 'Z') b[t - 'A'] = true;
    
    for(int i=0;a[i] != '\0';i++)
        putchar( (('A' <= a[i] && a[i] <= 'Z') && b[a[i] - 'A']) ? (a[i] - 'A' + 'a') : a[i]);
    
    return 0;
}
