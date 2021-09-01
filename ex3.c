#include <stdio.h>
#include <math.h>

int main(void) {

  int a, b;
  double pp, aa, d;

  printf("Enter the height the rectangle: ");
  scanf("%d", &b);
  printf("Enter the width of the rectangle: ");
  scanf("%d", &a);

  pp = 2*(a+b);
  aa = a*b;
  d = sqrt(pow(a,2)+pow(b,2));

  printf("\nPerimeter: %.2lf \nArea: %.2lf \nDiagonal: %.2lf", pp, aa, d);

  return 0;
}