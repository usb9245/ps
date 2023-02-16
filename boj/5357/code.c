#include <stdio.h>

int main()
{
    scanf("%*d ");
    
    for(char c, pc='\0';~(c = getchar());pc = c)
        if(c != pc) putchar(c);
    
    return 0;
}
