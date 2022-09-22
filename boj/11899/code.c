#include <stdio.h>

int main()
{
    int start = 0, stack = 0;

    char c;
    while(~(c = getchar())) {
        if(c == '(') stack++;
        else if(c == ')') {
            if(stack >= 1) stack--;
            else start++;
        }
    }

    printf("%d", start + stack);

    return 0;
}
