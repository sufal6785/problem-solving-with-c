#include <stdio.h>
// To multiply two matrices.
void matrix(int a[10][10], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}
void printmatrix(int a[10][10], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int a[10][10], b[10][10], m1, m2, n1, n2, i, j, c[10][10], k, sum;
    printf("Enter the value of matrix A: \n");
    printf("Enter number of row: ");
    scanf("%d", &m1);
    printf("Enter number of coloumn: ");
    scanf("%d", &n1);
    matrix(a, m1, n1);
    printf("Enter the value of matrix B: \n");
    printf("Enter number of row: ");
    scanf("%d", &m2);
    printf("Enter number of coloumn: ");
    scanf("%d", &n2);
    matrix(b, m2, n2);

    if (n1 == m2)
    {
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n2; j++)
            {
                sum = 0;
                for (k = 0; k < n1; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                c[i][j] = sum;
            }
        }
        printf("Matrix A=\n");
        printmatrix(a,m1,n1);
        printf("Matrix B=\n");
        printmatrix(b,m2,n2);
        printf("Matrix A X Matrix B= \n");
        printmatrix(c, m1, n2);
    }

    else
        printf("Dimension error.");

    return 0;
}