//To illustrate nested if statement

#include<stdio.h>

int main()
{
	int number;
	printf("Enter number\n");
	scanf("%d",&number);
	if(number<=0)
		if(number<0)
			printf("%d is negative",number);
		else
			printf("Zero");
	else
		printf("%d is positive",number);
	return(0);
}