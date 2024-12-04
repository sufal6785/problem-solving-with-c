#include <stdio.h>

void display (int[], int);

int main(void)

{

int a[20], i, n;

printf("Enter the number of values \n");

scanf("%d", &n);

printf("Enter &d Values \n", n);

for ( i = 0; i < n; i ++)

scanf("%d", &a[i]);

printf("The elements are \n");

display (a, n);

return 0;

}

void display (int a[], int n)

{

int i;

for (i = 0; i < n; i ++)

printf ( " %4d " , a[i]);

}