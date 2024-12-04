#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

void transpose(int matrix[SIZE][SIZE], int transposed[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void multiply_matrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            result[i][j] = 0;
            for (int k = 0; k < size; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

bool is_identity_matrix(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
}

bool is_orthogonal(int matrix[SIZE][SIZE], int size) {
    int transposed[SIZE][SIZE];
    int product[SIZE][SIZE];

    transpose(matrix, transposed, size);
    multiply_matrices(matrix, transposed, product, size);

    return is_identity_matrix(product, size);
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    if (is_orthogonal(matrix, SIZE)) {
        printf("The matrix is orthogonal.\n");
    } else {
        printf("The matrix is not orthogonal.\n");
    }

    return 0;
}