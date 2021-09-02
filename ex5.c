#include <stdio.h>
#include <math.h>

int main(void) {

  int s;
  double pp, aa, d;

  printf("Enter the side of the square: ");
  scanf("%d", &s);

  pp = 4*s;
  aa = pow(s,2);
  d = sqrt(2*(pow(s,2)));

  printf("\nPerimeter: %.2lf \nArea: %.2lf \nDiagonal: %.2lf", pp, aa, d);

  return 0;
}