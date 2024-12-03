#include <stdio.h>
// To find the minimum and maximum in a list of values.
int main()
{
    int a[10], i, n, min, max;
    printf("Enter the number of values(1-10): \n");
    scanf("%d", &n);
    printf("Enter the values: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];
    for (i = 1; i < n; i++)
        if (min > i)
            min = a[i];

    max = a[0];
    for (i = 1; i < n; i++)
        if (max < i)
            max = a[i];

    printf("The maaximum value in the array: %d", max);
    printf("\nThe minimum value in the array: %d", min);

    return 0;
}