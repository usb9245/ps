#include <stdio.h>

char d[10][80] = {
    " * * *\n*     *\n*     *\n*     *\n\n*     *\n*     *\n*     *\n * * *\n",
    "\n      *\n      *\n      *\n\n      *\n      *\n      *\n",
    " * * *\n      *\n      *\n      *\n * * *\n*\n*\n*\n * * *\n",
    " * * *\n      *\n      *\n      *\n * * *\n      *\n      *\n      *\n * * *\n",
    "\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n",
    " * * *\n*\n*\n*\n * * *\n      *\n      *\n      *\n * * *\n",
    " * * *\n*\n*\n*\n * * *\n*     *\n*     *\n*     *\n * * *\n",
    " * * *\n      *\n      *\n      *\n\n      *\n      *\n      *\n",
    " * * *\n*     *\n*     *\n*     *\n * * *\n*     *\n*     *\n*     *\n * * *\n",
    " * * *\n*     *\n*     *\n*     *\n * * *\n      *\n      *\n      *\n * * *\n"
};

int main()
{
    int n;
    scanf("%d", &n);
    
    printf("%s", d[n]);
    
    return 0;
}
