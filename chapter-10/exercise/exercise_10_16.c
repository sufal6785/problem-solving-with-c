#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

bool is_lower_triangular(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < SIZE-1; i++)
        for (int j = i + 1; j < SIZE; j++)
            if (matrix[i][j] != 0)
                return false;
    return true;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 0, 0},
        {2, 3, 0},
        {4, 5, 6}
    };

    if (is_lower_triangular(matrix, SIZE)) {
        printf("The matrix is lower triangular.\n");
    } else {
        printf("The matrix is not lower triangular.\n");
    }

    return 0;
}