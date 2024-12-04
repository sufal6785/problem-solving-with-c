#include <stdio.h>

#define SIZE 3

int sum_above_below_diagonal(int matrix[SIZE][SIZE],int size) {
    int sum=0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <size; j++) {
            if (i!=j) {
                sum+=matrix[i][j];
            }
        }
    }
    return sum;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = sum_above_below_diagonal(matrix, SIZE);

    printf("Sum of elements above and below the diagonal: %d\n", sum);

    return 0;
}