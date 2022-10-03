#include <stdio.h>

inline int min(int a, int b) { return a < b ? a : b; }
inline int max(int a, int b) { return a > b ? a : b; }

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);
    
         if(n <  5) printf("%d",         p                          );
    else if(n < 10) printf("%d", max(    p -  500               , 0));
    else if(n < 15) printf("%d", max(min(p -  500, p / 100 * 90), 0));
    else if(n < 20) printf("%d", max(min(p - 2000, p / 100 * 90), 0));
    else            printf("%d", max(min(p - 2000, p / 100 * 75), 0));
	
    return 0;
}
