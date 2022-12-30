#include <stdio.h>

int main() {
  int clerk, working_hours, teacher, principal;
  int whom;
  clerk = 100;
  teacher = 200;
  principal = 400;
  printf("Whom you want to compute the weekly salary "
         "?\n1.clerk\n2.teacher\n3.principal\n : ");
  scanf("%d", &whom);
  int amount;
  if (whom == 1) {
    amount = clerk;
  } else if (whom == 2) {
    amount = teacher;
  } else {
    amount = principal;
  }
  printf("The number of hours the employee worked : ");
  scanf("%d", &working_hours);
  if (working_hours > 50) {
    printf("The salay of the employee will be %d ",
           amount * 44 + 6 * 2 * amount);
  } else {
    if (working_hours > 44) {
      int extra_salary;
      extra_salary = working_hours - 44;
      printf("The salary of the employee will be %d",
             amount * 44 + extra_salary * 2 * amount);
    } else {

      printf("The salary of the employee will be %d", amount * working_hours);
    }
  }
}
