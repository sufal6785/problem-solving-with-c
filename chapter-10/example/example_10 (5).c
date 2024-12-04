#include <stdio.h>
// To search for a number in a list.

int main()
{
    int a[10], i, n, search;
    printf("Enter the number of numbers(1-10): \n");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number to be search: ");
    scanf("%d", &search);
    int f = 0;
    for (i = 1; i < n; i++)
        if (search == i)
        {
            f = 1;
            break;
        }
    if (f == 1)
        printf("The number %d is found.", search);
    else
        printf("The number %d is not found.", search);
    return 0;
}