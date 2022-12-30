#include <math.h>
#include <stdio.h>

int main() {
  int guess, tries = 0;
  srand(time(NULL));
  int num = rand() % 100;
  printf("====Number Guessing Game====\n\n");

  for (int i = 1; i <= 5; i++) {
    printf("Enter a guess number between 1 to 100 : ");
    scanf("%d", &guess);
    tries++;

    if (guess > num) {
      printf("Please guess smaller number.\n\n");
    } else if (guess < num) {
      printf("Please guess greater number.\n\n");
    } else {
      printf("\nCongratulations!\nYou got it in %d guesses,\n", tries);
    }
  }
  if (guess != num) {
    printf("Sorry..!\nBetter luck next time..!");
    printf("The number was : %d\n", num);
  }

  return 0;
}

