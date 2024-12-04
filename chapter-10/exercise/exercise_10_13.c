#include <stdio.h>

int binary_search(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target is smaller than mid, it can only be present in the left subarray
        if (arr[mid] > target) {
            return binary_search(arr, left, mid - 1, target);
        }

        // Else the target can only be present in the right subarray
        return binary_search(arr, mid + 1, right, target);
    }

    // Target is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 12, 17, 18, 20, 22, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 17;
    int result = binary_search(arr, 0, size - 1, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}