#include <stdio.h>

int main(void) {
  int x, y;
  printf("Enter value of x: ");
  scanf("%d", &x);
  printf("Enter value of y: ");
  scanf("%d", &y);
  x = x + y;
  y = x - y;
  x = x - y;
  printf("x: %d\n", x);
  printf("y: %d\n", y);

  return 0;
}
