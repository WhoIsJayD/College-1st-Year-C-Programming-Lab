#include <stdio.h>
int main() {
  int n, i, j, temp;
  printf(" Enter the number of elements \n");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements of array\n");
  for (i = 0; i < n; i++) {
    printf("a[%d]:", i);
    scanf("%d", &a[i]);
  }
  j = n - 1;
  i = 0;
  printf("The reverse array is\n");
  while (i < j) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
  }
  for (i = 0; i < n; i++)
    printf("a[%d]=%d\n", i, a[i]);
  return 0;
}
