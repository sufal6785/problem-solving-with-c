#include <stdio.h>

void read (int a[], int n);

void display(int a[], int n);

float find_mean(int a[], int n);

float find_variance (int a[], int n);

float find_stddev (int a[], int n);

int main(void)
{

	int a[10], n;

	float mean, variance, stddev;

	printf("Enter the number of values \n"); 
	scanf("%d", &n);

	printf("Enter the values of the array \n"); 
	read(a, n);

	printf("The list of values \n"); 
	display (a, n);

	mean = find_mean(a, n); 
	printf("mean = %f\n", mean);

	variance = find_variance (a, n); 
	printf("Variance = %f\n", variance);

	stddev= find_stddev(a, n);

	printf("stddev = %f\n", stddev); 
	return 0;
}

	void read(int a[], int n) 
	{

	int i;
	for(i=0; i < n; i++) 
		scanf("%d", &a[i]);

}
void display (int a[], int n)

	{
	int i;

	for(i=0; i<n; i++) 
		printf("%4d", a[i]);

} 
	float find_mean(int a[], int n)
	{

	float sum = 0, avg;
	int i;

	for(i=0; i < n; i++) 
		sum += a[i]; 
	avg = (float) sum /n;

	return avg;
}

	float find_variance (int a[], int n)

{

	float deviation,mean, sum_sqrs = 0, variance; 
	int i;

	mean = find_mean(a, n);

	for (i = 0; i < n; i++)
	{
	deviation = a[i] - mean; 
	sum_sqrs += deviation*deviation;

}

variance = sum_sqrs /n;

return variance;

}

float find_stddev (int a[], int n)
{

float variance, stddev;

variance=find_variance(a, n); 
stddev=sqrt(variance);

return stddev;
}
