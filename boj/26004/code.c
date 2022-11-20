#include <stdio.h>

inline int min(int a, int b) { return a < b ? a : b; }

int cl['Z' + 1];

int main()
{
    int n;
    scanf("%d ", &n);

    char s;
    for(int i=0;i<n;i++)
        cl[getchar()]++;
    
    printf("%d", min(min(cl['H'], cl['I']), min(cl['A'], min(cl['R'], cl['C']))));

    return 0;
}
