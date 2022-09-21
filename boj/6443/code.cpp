#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    for(int i=0;i<n;i++) {
        cin >> s;
        sort(s.begin(), s.end());

        cout << s << '\n';
        while(next_permutation(s.begin(), s.end()))
            cout << s << '\n';
    }

    return 0;
}
