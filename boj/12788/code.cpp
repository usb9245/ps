#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    int t;
    vector<int> a;
    for(int i=0;i<n;i++) {
        cin >> t;
        a.emplace_back(t);
    }
    
    sort(a.begin(), a.end(), greater<>());
    
    int x = (m * k), p = 0;
    for(int b : a) {
        x -= b, p += 1;
        
        if(x <= 0) break;
    }
    
    if(x <= 0) cout << p;
    else cout << "STRESS";
	
    return 0;
}
