#include <stdio.h>

int main() {
    int n;
    printf("Input n = ");
    scanf("%d", &n);
    int arr[n][n];

    // Input the elements of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    printf("Transposed Matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
