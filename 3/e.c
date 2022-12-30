#include <stdio.h>
int main() {
  srand(time(NULL));
  int num = rand() % 100 + 1;
  int guess;
  printf("Guess a number between 0 and 100: ");
  scanf("%d", &guess);
  if (guess == num) {
    printf("You guessed it right!\n");
  } else {
    printf("You guessed wrong!\nThe number was %d",num);
  }
}

