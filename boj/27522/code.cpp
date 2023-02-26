#include <bits/stdc++.h>
using namespace std;

int sc[9] = { 10, 8, 6, 5, 4, 3, 2, 1, 0 };
pair<int, char> l[9];

int main()
{
    int m, s, ms;
    
    for(int i=0;i<8;i++) {
        scanf("%d:%d:%d %c", &m, &s, &ms, &l[i].second);
        
        l[i].first = (m * 60000) + (s * 1000) + ms;
    }
    
    sort(l, l + 8);
    
    int r = 0, b = 0;
    for(int i=0;i<8;i++) {
             if(l[i].second == 'R') r += sc[i];
        else if(l[i].second == 'B') b += sc[i];
    }
    
    if(r == b) puts(l[0].second == 'R' ? "Red" : "Blue");
    else       puts(r > b              ? "Red" : "Blue");
    
    return 0;
}
