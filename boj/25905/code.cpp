#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.setf(ios::fixed); // 자리수 설정이 소수점 이후 부분에만 적용되도록 설정
    cout.precision(6); // 6자리까지 표시 (위에꺼 설정 안하면 전체 6자리가 되어버림)

    double g[11];
    for(int i=0;i<10;i++)
        cin >> g[i];

   sort(g, g + 10);

    double x = 1.0;
    for(int i=1;i<10;i++)
        x *= (g[i] / i);

    cout << x * 10E8; 

    return 0;
}
