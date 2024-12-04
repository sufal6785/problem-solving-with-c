#include <stdio.h>
#include <math.h>

#define SIZE 3

double find_norm(int matrix[SIZE][SIZE], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sum += matrix[i][j] * matrix[i][j];
        }
    }
    return sqrt(sum);
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    double norm = find_norm(matrix, SIZE);
    printf("The norm of the matrix is: %.2f\n", norm);

    return 0;
}