#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n) {
    if (n==2) return true;
    for (int i = 2; i <= n/2; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

void find_prime(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (is_prime(arr[i])) {
            printf("%d is a prime number\n", arr[i]);
        }
    }
}

int main() {
    int arr[11] = {2,4,6,8,23,12,17,16,18,20,22};
    int size = sizeof(arr) / sizeof(arr[0]);
    find_prime(arr, size);
    return 0;
}