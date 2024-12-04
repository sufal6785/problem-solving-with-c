#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

void find_saddle_points(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        int row_min = matrix[i][0];
        int col_index = 0;

        // Find the minimum element in the row
        for (int j = 1; j < size; j++) {
            if (matrix[i][j] < row_min) {
                row_min = matrix[i][j];
                col_index = j;
            }
        }

        // Check if the found minimum element is the largest in its column
        bool is_saddle_point = true;
        for (int k = 0; k < size; k++) {
            if (matrix[k][col_index] > row_min) {
                is_saddle_point = false;
                break;
            }
        }

        if (is_saddle_point) {
            printf("Saddle point found at (%d, %d): %d\n", i, col_index, row_min);
        }
    }
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    find_saddle_points(matrix, SIZE);

    return 0;
}