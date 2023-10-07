#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    long long int p;
    cin >> n >> m >> p;
    
    priority_queue<int, vector<int>, greater<>> pq;
    for(int i=0;i<n;i++) {
        int itm = 0, x;
        for(int j=0;j<m;j++) {
            cin >> x;
            
            if(x == -1) itm += 1;
            else pq.emplace(x);
        }
        
        while(!pq.empty()) {
            while(p < pq.top() && itm > 0) itm--, p *= 2;
            
            if(p < pq.top()) {
                cout << 0;
                return 0;
            }
            
            p += pq.top();
            pq.pop();
        }
        
        while(itm-- > 0) p *= 2;
    }
    
    cout << 1;

    return 0;
}
