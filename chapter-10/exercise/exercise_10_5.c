#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int pos;

  printf("Enter the position (1-10) of the element to delete: ");
  scanf("%d", &pos);

  if (pos < 1 || pos > 10) {
    printf("Invalid position!\n");
    return 1;
  }

  for (int i = pos - 1; i < 9; i++) {
    arr[i] = arr[i + 1];
  }

  printf("Array after deletion:\n");
  for (int i = 0; i < 9; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}