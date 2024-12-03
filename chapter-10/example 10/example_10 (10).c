#include <stdio.h>
// To find the sum of each row and each oloumb of matrix.
//  int rowsum(int a[10][10], int i, int n) //N of column changing.
//  {
//      //Finding the sum of each row.

//     if(n==0)
//     return 0;

//     else
//     return a[i][n-1]+rowsum(a, i, n-1);
// }
// int colsum(int a[10][10], int i, int m) //N of row changing.
// {
//     //Finding the sum of each column.

//     if(m==0)
//     return 0;

//     else
//     return a[m-1][i]+colsum(a, i, m-1);
// }
int main()
{
    int a[10][10], i, j, m, n, s[10];

    printf("Enter the number of row(m): ");
    scanf("%d", &m);
    printf("Enter the number of coloumn(n): ");
    scanf("%d", &n);
    printf("Enter the value of Matrix A: \n\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the value of A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Printing the value of Matrix A: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < m; i++)
    {
       s[i]=0;
        for (j = 0; j < n; j++)
        {
            s[i]+=a[i][j];
           
        } printf("The summation of %d row is: %d", i, s[i]);
        printf("\n");
    }

    printf("\n\n");

     for (i = 0; i < n; i++)
    {
       s[i]=0;
        for (j = 0; j < n; j++)
        {
            s[i]+=a[j][i];
           
        } printf("The summation of %d coloumn is: %d", i, s[i]);
        printf("\n");
    }

    return 0;

}
