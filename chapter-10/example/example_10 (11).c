#include<stdio.h>
//To add two matrices.
void matrix(int a[10][10], int m, int n)
{
    int i, j;
        for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

}
void printmatrix(int a[10][10],int m, int n)
{
    int i,j;
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}

int main(){
    int a[10][10],b[10][10],  m1,m2, n1,n2, s[10][10],i, j;

    printf("Enter the number of row(m) for matrix A: ");
    scanf("%d", &m1);
    printf("Enter the number of coloumn(n) for matrix A: ");
    scanf("%d", &n1);
    printf("Enter the value of Matrix A: \n\n");
    // for (i = 0; i < m1; i++)
    // {
    //     for (j = 0; j < n1; j++)
    //     {
    //         printf("Enter the value of A[%d][%d]: ", i, j);
    //         scanf("%d", &a[i][j]);
    //     }
    //     printf("\n");
    // }
    matrix(a,m1,n1);
    printf("\n\n");


     printf("Enter the number of row(m) for matrix B: ");
    scanf("%d", &m2);
    printf("Enter the number of coloumn(n) for matrix B: ");
    scanf("%d", &n2);
    printf("Enter the value of Matrix B: \n\n");
    // for (i = 0; i < m2; i++)
    // {
    //     for (j = 0; j < n2; j++)
    //     {
    //         printf("Enter the value of A[%d][%d]: ", i, j);
    //         scanf("%d", &b[i][j]);
    //     }
    //     printf("\n");
    // }
    matrix(b,m2,n2);
    printf("\n\n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
           s[i][j]= a[i][j]+b[i][j];
        }
        printf("\n");
    }
    printf("Printing the value of Matrix A: \n");
    // for (i = 0; i < m1; i++)
    // {
    //     for (j = 0; j < n1; j++)
    //         printf("%4d", a[i][j]);
    //     printf("\n");
    // }
    printmatrix(a,m1,n1);
    printf("\n\n");
     printf("Printing the value of Matrix B: \n");
    // for (i = 0; i < m2; i++)
    // {
    //     for (j = 0; j < n2; j++)
    //         printf("%4d", a[i][j]);
    //     printf("\n");
    // }
    printmatrix(b,m2,n2);
    printf("\n\n");
     printf("Printing the value of Matrix A + Matrix B: \n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
            printf("%4d", s[i][j]);
        printf("\n");
    }
 return 0;
}