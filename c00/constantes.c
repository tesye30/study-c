#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main() {
  
  float f = PI + 1;
  const int nro = 10;
  int soma = nro + 1;
  printf("Constante %d \n", soma);
  printf("PI = %f \n", f);

  system("pause");
  return 0;
}
