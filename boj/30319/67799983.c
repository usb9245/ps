#include <stdio.h>

int main()
{   
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);

    puts((y > 2023 || (y == 2023 && (m > 9 || (m == 9 && d > 16)))) ? "TOO LATE" : "GOOD");

    return 0;
}
