#include <bits/stdc++.h>
using namespace std;

vector<int> p = {0};

int main()
{
    int n, i = 1;
    for(;~scanf("%d", &n);) {
        if(n == 0) return 0;
        
        if(n >= i) 
            for(;i<=n;i++) p.emplace_back(p[i - 1] + i);
        
        printf("%d\n", p[n]);
    }
    
    return 0;
}
