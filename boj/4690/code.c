#include <stdio.h>

inline int tp(int n) { return (n * n * n); }

int main()
{
	int a = 2, b = 2, c = 2, d = 2;

	for(a=2;a<=100;a++) {
		for(b=2;( tp(a) >= ( tp(b) + tp(c) + tp(d) ) );b++,c=2) {
			for(c=2;( tp(a) >= ( tp(b) + tp(c) + tp(d) ) );c++,d=2) {
				for(d=2;( tp(a) >= ( tp(b) + tp(c) + tp(d) ) );d++) {
					if(( tp(a) == ( tp(b) + tp(c) + tp(d) ) ) && ( (b < c) && (c < d) ))
						printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
				}
			}
		}
	}

	return 0;
}
