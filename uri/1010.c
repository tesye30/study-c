#include <stdio.h>
 
int main() {
 
   int cod1, cod2, unid1, unid2;
   float price1, price2, pay1, pay2, pay;
   scanf("%d %d %f", &cod1, &unid1, &price1);
   scanf("%d %d %f", &cod2, &unid2, &price2);
   pay1 = unid1 * price1;
   pay2 = unid2 * price2;
   pay = pay1 + pay2;
   
   
   printf("VALOR A PAGAR: R$ %0.2f\n", pay);
 
    return 0;
}
