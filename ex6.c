#include <stdio.h>
#include <math.h>

int main(void) {
  
  double a, b, c, y;

  printf("Insert a, b and c values: ");
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  y = a + b/(c+a) + 2*(a-b) + log(64)/log(2);

  printf("Y equals %.2lf", y);

  return 0;
}