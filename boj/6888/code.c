#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    
    for(int i=0,j=(y-x);i<=j;i++)
        if(i % 2 == 0 && i % 3 == 0 && i % 4 == 0 && i % 5 == 0)
            printf("All positions change in year %d\n", x + i);
    
    return 0;
}
