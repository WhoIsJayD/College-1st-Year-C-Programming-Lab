#include <stdio.h>

int main() {
  char arr[100];
  int element, num_array;
  printf("Enter the number of elements you want in array : ");
  scanf("%d", &num_array);
  for (int i = 0; i < num_array; i++) {
    printf("Enter the element number %d : ", i + 1);
    scanf("%d", &element);
    arr[i] = element;
  }
  printf("Enter the number you want to delete : ");
  scanf("%d", &element);
  for (int i = 0; i < num_array; i++) {
    if (arr[i] == element) {
      for (int j = i; j < num_array - 1; j++) {
        arr[j] = arr[j + 1];
      }
    }
  }
  for (int i = 0; i < num_array - 1; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
