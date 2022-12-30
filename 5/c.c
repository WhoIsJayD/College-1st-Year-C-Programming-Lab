#include <stdio.h>
int main() {
  int a[5][5], i, j;
  printf("Enter the no of elements of Matrix a of size 5X5\n");
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i + j == 4) {
        a[i][j] = 0;
      }
      if (i + j < 4) {
        a[i][j] = -1;
      }
      if (i + j > 4) {
        a[i][j] = 1;
      }
    }
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}

