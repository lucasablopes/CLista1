#include <stdio.h>
#include <math.h>

int main(void) {

  double a, r, pp;

  printf("Insert circle radius: ");
  scanf("%lf", &r);

  a = 3.14159*pow(r,2);
  pp = 2*3.14159*r;

  printf("\nCircle area: %.2lf \nCircle perimeter: %.2lf", a, pp);
  
  return 0;
}