#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    if (size == 0) {
        return -1; // Base case: target not found
    }
    if (arr[size - 1] == target) {
        return size - 1; // Base case: target found
    }
    return linear_search(arr, size - 1, target); // Recursive case
}

int main() {
    int arr[] = {2, 4, 6, 8, 23, 12, 17, 16, 18, 20, 22};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 17;
    int result = linear_search(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}