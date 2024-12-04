#include <stdio.h>

#define SIZE 3

void sort_row(int row[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (row[j] > row[j + 1]) {
                int temp = row[j];
                row[j] = row[j + 1];
                row[j + 1] = temp;
            }
        }
    }
}

void sort_matrix_row_wise(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        sort_row(matrix[i], size);
    }
}

void print_matrix(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE] = {
        {3, 2, 1},
        {9, 8, 7},
        {6, 5, 4}
    };

    printf("Original Matrix:\n");
    print_matrix(matrix, SIZE);

    sort_matrix_row_wise(matrix, SIZE);

    printf("Sorted Matrix Row-wise:\n");
    print_matrix(matrix, SIZE);

    return 0;
}