#include <stdio.h>

int sum(int[], int);

int main(void) {

int a[20], i, n, s;

printf("Enter the number of values \n");
scanf("%d", &n);

printf("Enter %d Values \n", n);

for ( i = 0; i < n ;i++)

scanf ( "%d" , &a[i]);

s = sum(a, n) ;

printf ("Sum =%d \n",s) ;

return 0;

}
int sum(int a[], int n) {

int s = 0, i;

for(i=0; i < n; i++) 
	s+=a[i];

return (s);

}