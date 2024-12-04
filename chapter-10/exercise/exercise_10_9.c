#include <stdio.h>
// To find the Union of two array
void printArray(int arr[], int size) // For printing array
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}
int isInResult(int result[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (result[i] == element)
            return 1;
    }
    return 0;
}
void unionArr(int arr1[], int size1, int arr2[], int size2)
// For finding union
{
    int i, k = 0, result[100];
    for (i = 0; i < size1; i++)
    {
        if (!isInResult(result, k, arr1[i]))
        {
            result[k] = arr1[i];
            k++;
        }
    }
    for (i = 0; i < size2; i++)
    {
        if (!isInResult(result, k, arr2[i]))
        {
            result[k] = arr2[i];
            k++;
        }
    }
    printArray(result, k);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 4, 6};
    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);
    printf("Array a = ");
    printArray(a, m);
    printf("Array b = ");
    printArray(b, n);
    printf("Union of Array a and Array b = ");
    unionArr(a, m, b, n);
    return 0;
}
