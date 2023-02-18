#include <stdio.h>

int main()
{
    double w, h;
    scanf("%lf %lf", &w, &h);
    
    double bmi = w / (h * h);
    puts(bmi < 18.5 ? "Underweight" : bmi <= 25.0 ? "Normal weight" : "Overweight");
    
    return 0;
}
