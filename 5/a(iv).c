#include <stdio.h>
int main() {
  int n, i, j, max;
  printf(" Enter the number of elements \n");
  scanf("%d", &n);
  int a[n];
  int index;
  printf("Enter the elements of array\n");
  for (i = 0; i < n; i++) {
    printf("here:-\t");
    scanf("%d", &a[i]);
  }
  printf("The array is\n");
  for (i = 0; i < n; i++) {
    printf("a[%d]:%d\n", i, a[i]);
  }
  max = a[0];
  for (i = 0; i < n; i++) {
    if (max <= a[i]) {
      max = a[i];
      index = i + 1;
    }
  }
  printf("The max number is %d and the number location is %d", max, index);
  return 0;
}

