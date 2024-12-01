//To find whether a number is even or odd
#include<stdio.h>
int main()
{
	int number, rem;
	printf("Enter a number\n");
	scanf("%d",&number);
	rem=number%2;
	if(rem==0)
		printf("%d is even",number);
	if(rem!=0)
		printf("%d is odd",number);
		
	return(0);
}