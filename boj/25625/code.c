#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    printf("%d", y >= x ? (y - x) : (x + y));
	
    return 0;
}
