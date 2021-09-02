#include <stdio.h>

int main(void) {
  
  double a, b, tmp;

  printf("Insert A: ");
  scanf("%lf", &a);

  printf("Insert B: ");
  scanf("%lf", &b);

  tmp = a;
  a = b;
  b = tmp;

  printf("\nNew A: %.2lf", a);
  printf("\nNew B: %.2lf", b);

  return 0;
}