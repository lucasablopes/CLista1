#include <stdio.h>

int main(void) {
  
  int hr, min, mint;

  printf("Insert hour: ");
  scanf("%d", &hr);
  
  while (hr>23) {
  printf("Invalid entry! Please use a number within the interval of 0 and 23.\n");
  printf("\nInsert hour: ");
  scanf("%d", &hr);
  }

  printf("Insert minutes: ");
  scanf("%d", &min);

  while (min>59) {
  printf("Invalid entry! Please use a number within the interval of 0 and 59.\n");
  printf("\nInsert minutes: ");
  scanf("%d", &min);
  }

  mint = hr*60+min;

  printf("\nToday %d minutes passed", mint);

  return 0;
}