#include <stdio.h>

int main() {
  int number_to_ck, num2, temp_num = 0;
  printf("Number to check: ");
  scanf("%d", &number_to_ck);
  num2 = number_to_ck / 2;

  for (int i = 2; i <= num2; i++) {
    if (number_to_ck % i == 0) {
      printf("Not a prime number.");
      temp_num = 1;
      break;
    }
  }
  if (temp_num == 0) {
    printf("Number is prime.");
  }
  return 0;
}

