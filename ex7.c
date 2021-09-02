#include <stdio.h>
#include <math.h>

int main(void) {
  
  double a, b, c;

  printf("Insert a and b values:\n");
  scanf("%lf", &a);
  scanf("%lf", &b);

  c = sqrt(pow(a,2)+pow(b,2));

  printf("\nC equals %.2lf", c);

  return 0;
}