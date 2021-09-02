#include <stdio.h>

int main(void) {
  
  int msal, ysal;
  double rsal;

  printf("Insert the minimum salary: ");
  scanf("%d", &msal);

  printf("Insert your salary: ");
  scanf("%d", &ysal);

  rsal = (double)ysal/msal;

  printf("\nYou recieve %.1lf minimum salary(ies)", rsal);

  return 0;
}