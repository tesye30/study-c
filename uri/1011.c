#include <stdio.h>
#include <math.h>
 
int main() {
 
    double r;
    double pi = 3.14159, calc;
    scanf("%lf",&r);
    calc = (4.0/3) * pi * (r*r*r);
    
    printf("VOLUME = %0.3lf\n", calc);
 
    return 0;
}
