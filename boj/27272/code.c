#include <stdio.h>

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
        scanf("%d", &arr[i]);
    
    int t;
    for(int i=0;i<4;i++)
        for(int j=i+1;j<4;j++)
            if(arr[i] > arr[j]) {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
    
    printf("%d", arr[0] * arr[1] + arr[2] * arr[3]);
    
    return 0;
}
