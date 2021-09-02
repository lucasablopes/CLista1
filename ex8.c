#include <stdio.h>

int main(void) {

  int ap, t, tt;

  printf("Insert the first term: ");
  scanf("%d", &t);

  printf("Insert the constant: ");
  scanf("%d", &ap);

  tt = t + 9*ap;

  printf("The tenth term of the arithmetic progression is %d", tt);

  return 0;
}