#include <stdio.h>

int mtd(int y, int m)
{
    if(m == 2)
        return (y % 4) ? 28 : 29;
    
    static int dl[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dl[m];
}

int y, m, d;
int r = 0, s = 0;
void checkDate(int a, int b, int c)
{
    if(b > 12 || b == 0 || c == 0 || c > mtd(a, b)) return;

    r += 1;
    
    if(a > y || (a == y && b > m) || (a == y && b == m && c >= d))
        s += 1;
}

int main()
{
    int n;
    scanf("%d %d %d %d", &y, &m, &d, &n);

    int a, b, c;
    for(int i=0;i<n;i++, r = s = 0) {
        scanf("%d %d %d", &a, &b, &c);

        checkDate(a, b, c);
        checkDate(c, b, a);
        checkDate(c, a, b);

        puts(r <= 0 ? "invalid" : (r == s ? "safe" : "unsafe"));
    }

    return 0;
}
