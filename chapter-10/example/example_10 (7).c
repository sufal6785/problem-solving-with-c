#include <stdio.h>
// To accept and display a matrix.
int main()
{
    int a[3][3], i, j;
    printf("Enter the value of Matrix A: \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value of A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Printing the value of Matrix A: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    return 0;
}