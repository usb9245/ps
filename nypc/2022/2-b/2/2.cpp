#include <bits/stdc++.h>
using namespace std;

queue<unsigned long long int> x;

inline bool intsqrt(unsigned long long int n)
{
	long double ld = sqrt(n);
	unsigned long long int ulli = (unsigned long long int)ld;

	if(ulli * ulli == n) return true;
	return false;
}

inline unsigned long long int f(unsigned long long int a, unsigned long long int b)
{	
	int t = 0;
	x.emplace(a);

	while(!x.empty()) {
		int si = x.size();

		while(si-- > 0) {
			if(x.front() == b) {
				while(!x.empty()) x.pop();
				return t;
			}

			unsigned long long int xf = x.front();
			x.pop();

			x.emplace(xf + 1);
			if(xf > 1) x.emplace(xf - 1);
			x.emplace(xf * xf);
			if(intsqrt(xf)) x.emplace((unsigned long long int)sqrt(xf));
		}

		t++;
	}

	return t;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int q;
	cin >> q;

	unsigned long long int a, b;
	for(int i=0;i<q;i++) {
		cin >> a >> b;

		cout << bfs(a, b) << '\n';
	}
	
    return 0;
}
