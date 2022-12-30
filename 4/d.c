#include <stdio.h>

int main() {
  int number, rem, original_number, reverse = 0;
  printf("Enter the number: ");
  scanf("%d", &number);
  original_number = number;
  while (number != 0) {
    rem = number % 10;
    reverse = reverse * 10+rem;
    number /= 10;
  }
  printf("The reversed number is %d\n", reverse);
  if (original_number == reverse) {
    printf("The number is a Palindrome.");
  } else {
    printf("The number is not a Palindrome.");
  }
  return 0;
}

