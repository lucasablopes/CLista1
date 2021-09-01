#include <stdio.h>

int main(void) {
  
  int kw;
  double kwp, salmin, p, pd;

  printf("Enter minimum salary: ");
  scanf("%lf", &salmin);

  kwp = salmin/700;

  printf("Enter energy consumption in kilowatt: ");
  scanf("%d", &kw);

  p = kwp*kw;
  pd = 9*p/10;

  printf("\nPrice per kilowatt: %.2lf \nPrice to be paid: %.2lf \nPrice to be paid after discount: %.2lf", kwp, p, pd);

  
  return 0;
}