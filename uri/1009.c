#include <stdio.h>
 
int main() {
 
    char name[30];
    double comission, salary, total;
    scanf("%s",name);
    scanf("%lf",&salary);
    scanf("%lf",&comission);
    total = salary + (comission * 0.15);

    printf("TOTAL = R$ %0.2lf\n", total);
    return 0;
}
