//To find whether a number is +ve, -ve or 0

#include<stdio.h>

int main()
{
	int number;
	printf("Enter number\n");
	scanf("%d",&number);
	/*Finding whether a number is +ve, -ve or 0 begins*/
	if(number>0)
		printf("%d is positive",number);
	else if(number<0)
		printf("%d is negative",number);
	else
		printf("zero");
	/*Finding whether a number is +ve, -ve or 0 ends*/
	return(0);
}