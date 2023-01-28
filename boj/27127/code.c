#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int t = 0;
    for(int a=0;a<=9;a++) {
        
        for(int b=0;b<=9;b++) {
            
            if(a == b) continue;
                        
            for(int c=0;c<=9;c++) {
                
                if(a == c || b == c) continue;
                
                for(int d=0;d<=9;d++) {
                    
                    if(a == d || b == d || c == d) continue;
                    
                    for(int e=0;e<=9;e++) {
                        
                        if(a == e || b == e || c == e || d == e) continue;
                        
                        for(int f=0;f<=9;f++) {
                            
                            if(a == f || b == f || c == f || d == f || e == f) continue;
                            
                            for(int g=0;g<=9;g++) {
                                
                                if(a == g || b == g || c == g || d == g || e == g || f == g) continue;
                                
                                for(int h=0;h<=9;h++) {
                                    
                                    if(a == h || b == h || c == h || d == h || e == h || f == h || g == h) continue;
                                    
                                    for(int i=0;i<=9;i++) {
                                        
                                        if(a == i || b == i || c == i || d == i || e == i || f == i || g == i || h == i) continue;
                                        
                                        for(int j=0;j<=9;j++) {
                                            
                                            if(a == j || b == j || c == j || d == j || e == j || f == j || g == j || h == j || i == j) continue;
                                            
                                            if((double)((a * 10000) + (b * 1000) + (c * 100) + (d * 10) + e) / (double)((f * 10000) + (g * 1000) + (h * 100) + (i * 10) + j) == 9.0) {
                                                t += 1;
                                                
                                                if(t == n) {
                                                    printf("%d%d%d%d%d %d%d%d%d%d\n", a, b, c, d, e, f, g, h, i, j);
                                                    return 0;
                                                }
                                            }
                                            
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
