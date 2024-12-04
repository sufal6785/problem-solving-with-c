#include <stdio.h>
// To find the sum and avarage of the values in a 1-D array.

int main()
{
    int a[10], i, n, sum;
    float avg;

    printf("Enter the number of elements[1-10]: ");
    scanf("%d", &n);

    printf("Eneter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("The numbers are: \n");
    for (i = 0; i < n; i++)
        printf("a[%d]= %d\n", i, a[i]);

    sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / n;

    printf("\nSum= %d\n", sum);
    printf("Average= %f", avg);

    return 0;
}