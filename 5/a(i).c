#include <stdio.h>
int main() {
  int n, i;
  printf("Enter a number of elements : ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements of an array : ");
  for (i = 0; i < n; i++) {
    printf("a[%d]:", i);
    scanf("%d", &a[i]);
  }
  printf("The array is \n");
  for (i = 0; i < n; i++) {
    printf("a[%d]:%d\n", i, a[i]);
  }
  return 0;
}
