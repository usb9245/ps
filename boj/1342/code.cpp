#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    sort(s.begin(), s.end());
    
    int count = 0;
    
    do {
        bool same = true;
        
        char pre = '\0';
        for(char now : s) {
            if(pre == now) {
                same = false;
                break;
            }
            else pre = now;
        }
        
        if(same == true) count += 1;
        
    } while(next_permutation(s.begin(), s.end()));
    
    cout << count;
	
    return 0;
}
