//To find whether a year is a leap year or not
#include<stdio.h>
int main()
{
	int year, r4, r100, r400;
	printf("Enter a year\n");
	scanf("%d",&year);
	r4=year%4;
	r100=year%100;
	r400=year%400;
	if((r4==0)&&(r100!=0)||(r400==0))
		printf("%d is a leap year",year);
	else
		printf("%d is not a leap year",year);
		
	return(0);
}