#include <bits/stdc++.h>
using namespace std;

vector<pair<int, bool>> m;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int a;
    for(int i=0;i<n;i++) {
        cin >> a;
        m.emplace_back(make_pair(a, false));
    }
    
    sort(m.begin(), m.end(), greater<>());
    
    while(m.size() > 1) {
        bool ins = false;
        
        for(int i=(m.size() - 2);i>=0;i--) {
            if(m[i].second == false && m[i].first > m.back().first) {
                m[i].second = true;
                m.pop_back();
                ins = true;
                break;
            }
        }
        
        if(ins == false) break;
    }
    
    cout << m.size();
	
    return 0;
}
