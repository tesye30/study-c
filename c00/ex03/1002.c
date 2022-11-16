#include <stdio.h>
 
int main() {
 
    double n = 3.14159;
    double raio, x, area;
    scanf("%lf", &raio);
    x = raio * raio;
    area = n * x;
    printf("A=%lf\n", area);
    
    return 0;
}
