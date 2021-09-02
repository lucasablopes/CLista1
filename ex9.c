#include <stdio.h>
#include <math.h>

int main(void) {

  int ag, t, ft;

  printf("Insert the first term: ");
  scanf("%d", &t);

  printf("Insert the constant: ");
  scanf("%d", &ag);

  ft = t * pow(ag,4);

  printf("The fifth term of the geometric progression is %d", ft);

  return 0;
}