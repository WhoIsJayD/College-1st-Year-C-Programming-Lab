#include <stdio.h>

int main(void) {
  int x, y, temp;
  printf("Enter value of x: ");
  scanf("%d", &x);
  printf("Enter value of y: ");
  scanf("%d", &y);
  temp = x;
  x = y;
  y = temp;
  printf("x: %d\n", x);
  printf("y: %d\n", y);
  return 0;
}
