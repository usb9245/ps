#include <stdio.h>

char sn[5][14] = { "Double eagle.", "Eagle.", "Birdie.", "Par.", "Bogey."};

int main()
{
    for(int p, s, i=1;;i++) {
        scanf("%d %d", &p, &s);
        
        if(p == 0) return 0;
        
        printf("Hole #%d\n", i);
        
             if(s == 1)     puts("Hole-in-one." );
        else if(s - p >= 2) puts("Double Bogey.");
        else                puts(sn[(s - p) + 3]);
        
        putchar('\n');
    }
    
    return 0;
}
