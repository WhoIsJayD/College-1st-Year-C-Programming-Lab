#include <stdio.h>

int main(void) {
  int x, y, max;
  printf("Enter value of x: ");
  scanf("%d", &x);
  printf("Enter value of y: ");
  scanf("%d", &y);
  max = (x > y) ? x : y;
  printf("Maximum of x and y: %d\n", max);

  return 0;
}
