#include <stdio.h>

#define SIZE 3

int find_trace(int matrix[SIZE][SIZE], int size) {
    int trace = 0;
    for (int i = 0; i < size; i++) {
        trace += matrix[i][i];
    }
    return trace;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int trace = find_trace(matrix, SIZE);
    printf("The trace of the matrix is: %d\n", trace);

    return 0;
}