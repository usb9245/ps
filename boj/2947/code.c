#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x[5];
    for(int i=0;i<5;i++) scanf("%d", &x[i]);

    for(;;) {
        for(int i=0;i<4;i++) {
            if(x[i] > x[i + 1]) {
                int temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;

                for(int j=0;j<5;j++) printf("%d ", x[j]);
            }
        }

        bool check = true;
        for(int i=0;i<5;i++) if(x[i] != (i + 1)) check = false;

        if(check) return 0;
    }

    return 0;
}
