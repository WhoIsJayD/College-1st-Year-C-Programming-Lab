#include <stdio.h>
int main() {
  int i, a[5], a1[5];
  printf(" Enter the elements of an array \n");
  for (i = 0; i < 5; i++) {
    printf("a[%d]:", i);
    scanf("%d", &a[i]);
  }
  printf("The square of array is \n");
  for (i = 0; i < 5; i++) {
    a1[i] = a[i] * a[i];
    printf("%d\n", a1[i]);
  }
  return 0;
}

