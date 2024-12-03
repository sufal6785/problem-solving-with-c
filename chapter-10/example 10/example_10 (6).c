#include <stdio.h>
// To short a list of numbers from array.
int main()
{
    int a[10], i, n, j;
    printf("Enter the number of numbers(1-10): \n");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Unshorted list: \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    // Sorting/Bubble search.

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j]) // If yes, then swap
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    printf("Shorting list: \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}