#include <stdio.h>
int main() {
  int number;
  printf("Enter the value of X : ");
  scanf("%d", &number);
  if (number % 10 == 0 || number % 5 == 0) {
    printf("The value of x is divisible by 10");

  } else if (number * 2 % 10 == 0 || number * 2 % 5 == 0) {
    printf("The value of x is divisible by 10");
  } else {
    printf("Loser ");
  }
  return 0;
}
