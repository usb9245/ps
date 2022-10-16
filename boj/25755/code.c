#include <stdio.h>

int arr[21][21];

char r(int n)
{
         if(n == 2) return '5';
    else if(n == 5) return '2';
    else if(n == 1) return '1';
    else if(n == 8) return '8';
    
    return '?';
}

int main()
{
    char w;
    int n;
    
    scanf("%c %d", &w, &n);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &arr[i][j]);
    
    if(w == 'U' || w == 'D') {
        for(int i=(n-1);i>=0;i--) {
            for(int j=0;j<n;j++) 
                printf("%c ", r(arr[i][j]));
            putchar('\n');
        }
    }
    else if(w == 'L' || w == 'R') {
        for(int i=0;i<n;i++) {
            for(int j=(n-1);j>=0;j--) 
                printf("%c ", r(arr[i][j]));
            putchar('\n');
        }
    }
    
    return 0;
}
