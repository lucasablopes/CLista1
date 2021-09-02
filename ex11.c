#include <stdio.h>

int main(void) {

  int n, d;
  double dec;

  printf("Insert numerator: ");
  scanf("%d", &n);

  printf("Insert denominator: ");
  scanf("%d", &d);

  dec = (double)n/d;

  printf("\nCorresponding decimal to the fraction (3 decimal digits): %.3lf", dec);

  return 0;
}