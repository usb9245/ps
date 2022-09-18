#include <bits/stdc++.h>
using namespace std;

pair<double, int> x[4];

int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    x[0] = make_pair((a / c) + (b / d), 0);
    x[1] = make_pair((c / d) + (a / b), 1);
    x[2] = make_pair((d / b) + (c / a), 2);
    x[3] = make_pair((b / a) + (d / c), 3);

    sort(x, x + 4, greater<>());

    cout << x[0].second;
	
    return 0;
}
