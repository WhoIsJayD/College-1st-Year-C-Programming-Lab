#include <stdio.h>
int main() {

  int a1;
  float a2;
  char a3[100];
  double a4;
  printf("Enter integer number :");
  scanf("%d", &a1);
  printf("\nEnter floating number :");
  scanf("%f", &a2);
  printf("\nEnter a character :");
  scanf("%s", &a3);
  printf("\nEnter double number :");
  scanf("%lf", &a4);
  printf(" \nYour \n1. Integer : %d\n2. Floating : %f\n3. Character : %s\n4.Double : %lf\n",a1, a2, a3, a4);
  return 0;
}
