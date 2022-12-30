#include <stdio.h>
int main() {
  for (int i = 0; i < 4; i++) {
    char a = 'A';
    for (int j = 0; j <= i; j++) {
      printf("%c", a);
      a++;
    }
    printf("\n");
  }
  printf("\n");

  for (int i = 0; i < 4; i++) {
    int sum;
    for (int j = 0; j <= i; j++) {
      sum = i + j;

      if (sum % 2 == 0) {
        printf("1");
      } else {
        printf("0");
      }
    }
    printf("\n");
  }
  printf("\n");

  for (int i = 1; i < 5; i++) {
    int n = 5;
    for (int k = 1; k < n - i; k++) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }
    for (int l = i - 1; l > 0; l--) {
      printf("%d", l);
    }
    printf("\n");
  }

  return 0;
}

