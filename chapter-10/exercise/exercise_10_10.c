#include <stdio.h>

int find_largest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[11] = {4, 6, 1, 3, 7, 11, 9, 2, 5, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = find_largest(arr, size);
    printf("Largest element in the array is: %d\n", largest);
    return 0;
}