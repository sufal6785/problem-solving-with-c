//To accept a month (number) and display the maximum number of days in the month

#include<stdio.h>

int main()
{
	int month, year, days;
	printf("Enter month number\n");
	scanf("%d",&month);
	printf("Enter year number\n");
	scanf("%d",&year);
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: days=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11: days=30;
			break;
		case 2:
			if((year%4==0)&&(year%100!=0)||(year%400==0))
				days=29;
			else
				days=28;
				break;
		default:
			printf("Not a valid month number ");
		
	}
	printf("Maximum number of days in month %d of the year %d= %d",month,year,days);
	
	return(0);
}