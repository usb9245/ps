#include <stdio.h>
#include <stdbool.h>

bool bir[13][32];

int main()
{
    int n;
    scanf("%d", &n);
    
    int m, d, c = 0;
    for(int i=0;i<n;i++) {
        scanf("%d/%d", &m, &d);
        
        if(bir[m][d] == false)
            bir[m][d] = true, c += 1;
    }
    
    printf("%d", c);
	
    return 0;
}
