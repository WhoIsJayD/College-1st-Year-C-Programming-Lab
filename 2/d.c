#include <stdio.h>

int main(void) {
  float principal, rate, time, final_amount;
  printf("Enter principal amount: ");
  scanf("%f", &principal);
  printf("Enter rate of interest (in percentage): ");
  scanf("%f", &rate);
  printf("Enter time (in years): ");
  scanf("%f", &time);
  final_amount = principal * (1 + (rate/100) * time);
  printf("Final amount: %.2f\n", final_amount);
  return 0;
}
