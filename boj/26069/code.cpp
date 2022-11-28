#include <bits/stdc++.h>
using namespace std;

unordered_map<string, bool> name;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    name["ChongChong"] = true;

    int x = 1;
    string a, b;
    for(int i=0;i<n;i++) {
        cin >> a >> b;

        if((name[a] == true || a == "ChongChong") && name[b] == false) x++, name[b] = true;
        if((name[b] == true || b == "ChongChong") && name[a] == false) x++, name[a] = true;
    }

    cout << x;

    return 0;
}
