#include <stdio.h>
 
int main() {
 
    int numb, hours;
    float hwork, salary;
    scanf("%d",&numb);
    scanf("%d",&hours);
    scanf("%f",&hwork);
    salary = hours * hwork;
    printf("NUMBER = %d\n", numb);
    printf("SALARY = U$ %0.2f\n", salary);
    return 0;
}
