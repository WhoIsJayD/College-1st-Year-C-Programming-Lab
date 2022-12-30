#include <stdio.h>

int main() {
  int number_of_students, sub = 4;
  char arr[100][100];
  printf("Enter the number of students: ");
  scanf("%d", &number_of_students);

  for (int i = 0; i < number_of_students; i++) {
    printf("Student %d: \n", i + 1);
    for (int j = 0; j < sub; j++) {
      int marks;
      printf("\t\tSub %d marks: ", j + 1);
      scanf("%d", &marks);
      arr[i][j] = marks;
    }
  }
  for (int i = 0; i < number_of_stud    ents; i++) {
    printf("Student %d\n", i + 1);
    int total_marks = 0;
    for (int j = 0; j < sub; j++) {
      printf("\t\tSub %d marks : %d\n", j + 1, arr[i][j]);
      total_marks += arr[i][j];
    }
    printf("\tTotal marks : %d\n", total_marks);
  }
  int teacher_input, total_of_that;
  printf("Average of which subject ?\nEnter the input from 0 to 3\n = ");
  scanf("%d", &teacher_input);
  for (int i = 0; i < number_of_students; i++) {
    total_of_that += arr[i][teacher_input];
  }
  printf("The average marks of the class is %d :",
         total_of_that / number_of_students);
  return 0;
}
