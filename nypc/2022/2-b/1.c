#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")

#include <stdio.h>
#include <stdbool.h>

__uint128_t pl[64];

inline __uint128_t tpow(long long int n)
{
	__uint128_t p = 2;

	for(int i=1;i<n;i++) p *= 2;

	return p;
}

inline __uint128_t max(__uint128_t a, __uint128_t b) { return a > b ? a : b; }
inline __uint128_t min(__uint128_t a, __uint128_t b) { return a < b ? a : b; }

long long int k, l, r;

__uint128_t bs(__uint128_t left, __uint128_t right, bool bit)
{
	if(r < left || right < l) return 0;
	if(left == right) return (bit ? 1 : 0);

	return bs(left, min(left + ((right - left) / 2), right - 1), bit ? false : true) + bs(max(min(left + ((right - left) / 2 + 1), right), left + 1), right, bit);
}

int main()
{
	for(long long int i=0;i<64;i++) pl[i] = tpow(i);

	int t;
	scanf("%d", &t);

	for(int i=0;i<t;i++) {
		scanf("%lld %lld %lld", &k, &l, &r);

		printf("%llu\n", (unsigned long long int)bs(1, (k < 64 ? pl[k] : tpow(k)), false));
	}
	
	return 0;
}
