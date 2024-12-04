#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

bool is_lower_triangular(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j==i && matrix[i][j] != 1) {
                return false;
            } else if (j!=i && matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    if (is_lower_triangular(matrix, SIZE)) {
        printf("The matrix is identity matrix.\n");
    } else {
        printf("The matrix is not identity matrix.\n");
    }

    return 0;
}