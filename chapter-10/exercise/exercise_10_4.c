#include <stdio.h>

int main() {
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pos, element;

    printf("Enter the position (1-11) and element to insert: ");
    scanf("%d %d", &pos, &element);

    for (int i = 10; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;

    for (int i = 0; i < 11; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}