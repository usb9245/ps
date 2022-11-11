#include <stdio.h>

char st[31];

int main()
{
    scanf("%s", st);
    
    for(int i=0;st[i] != '\0';i++) {
        if(i > 0) {
            if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u') {
                if(st[i - 1] == 'a' || st[i - 1] == 'e' || st[i - 1] == 'i' || st[i - 1] == 'o' || st[i - 1] == 'u') {
                    putchar('0');
                    return 0;
                }
            }
            else {
                if(st[i - 1] != 'a' && st[i - 1] != 'e' && st[i - 1] != 'i' && st[i - 1] != 'o' && st[i - 1] != 'u') {
                    putchar('0');
                    return 0;
                }
            }
        }
        
        if(st[i + 1] != '\0') {
            if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u') {
                if(st[i + 1] == 'a' || st[i + 1] == 'e' || st[i + 1] == 'i' || st[i + 1] == 'o' || st[i + 1] == 'u') {
                    putchar('0');
                    return 0;
                }
            }
            else {
                if(st[i + 1] != 'a' && st[i + 1] != 'e' && st[i + 1] != 'i' && st[i + 1] != 'o' && st[i + 1] != 'u') {
                    putchar('0');
                    return 0;
                }
            }
        }
    }
    
    putchar('1');
    
    return 0;
}
