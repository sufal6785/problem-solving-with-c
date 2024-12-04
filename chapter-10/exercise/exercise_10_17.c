#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

bool is_upper_triangular(int matrix[SIZE][SIZE], int size) {
    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {0, 4, 5},
        {0, 0, 6}
    };

    if (is_upper_triangular(matrix, SIZE)) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is not upper triangular.\n");
    }

    return 0;
}