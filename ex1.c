#include <stdio.h>

int main(void) {

  int a, b, x, y, z, r;

  printf("Digite um número de três algarismos: ");
  scanf("%d", &a);

  x = a%10;
  b = a/10;
  y = b%10;
  z = b/10;

  r = x*100 + y*10 + z;

  printf("\nNúmero invertido: ");
  printf("%d", r);
}