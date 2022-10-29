#include <stdio.h>

int arr[300001];

int main()
{
    for(int i=0;i<300000;i++) arr[i] = i + 1;
    
    long long int k, n;
    scanf("%lld %lld", &k, &n);
    
    n %= (k * (k - 1));
    
    int temp;
    for(int i=0;n--;i = (i + 1) % (k - 1)) {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
    }
    
    for(int j=0;j<k;j++)
        printf("%d ", arr[j]);
    
    return 0;
}
