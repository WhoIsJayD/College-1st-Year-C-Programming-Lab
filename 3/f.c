#include <stdio.h>

int main() {
  float ct, t, se, lpw, see, ct1, t1, se1, lpw1, see1, total_marks;
  printf("Enter class test marks:");
  scanf("%f", &ct);
  printf("Enter tutorial marks:");
  scanf("%f", &t);
  printf("Enter SE marks:");
  scanf("%f", &se);
  printf("Enter LPW marks:");
  scanf("%f", &lpw);
  printf("Enter SEE marks:");
  scanf("%f", &see);
  ct1 = ct * 0.12;
  t1 = t * 0.12;
  se1 = se * 0.16;
  lpw1 = lpw * 0.2;
  see1 = see * 0.4;
  total_marks = ct1 + t1 + se1 + lpw1 + see1;
  printf("Your marks are :- %f\n\n", total_marks);
  if (total_marks > 90 && total_marks <= 100) {
    printf("Your grade is A+");
  } else if (total_marks > 80 && total_marks <= 90) {
    printf("Your grade is A");
  } else if (total_marks > 70 && total_marks <= 80) {
    printf("Your grade is B+");
  } else if (total_marks > 60 && total_marks <= 70) {
    printf("Your grade is B");
  } else if (total_marks > 50 && total_marks <= 60) {
    printf("Your grade is C+");
  } else if (total_marks > 40 && total_marks <= 50) {
    printf("Your grade is C");
  } else if (total_marks < 40) {
    printf("Your grade is Fail !");
  } else {
    printf("There is some error in grading system !");
  }
}
