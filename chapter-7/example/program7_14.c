//To illustrate nesting of switch statements

#include<stdio.h>

int main()
{
	int dept, dsg;
	printf("Enter dept code\n");
	scanf("%d",&dept);
	printf("Enter dsg code\n");
	scanf("%d",&dsg);	
	
	switch(dept)
	{
		case 1: switch(dsg)
		{
			case 1: printf("Manager in Sales Dept\n");
			break;
			case 2: printf("Asst. Manager in Sales Dept\n");
			break;
		}
		break;
		
		case 2: switch(dsg)
		{
			case 1: printf("Manager in Production Dept\n");
			break;
			case 2: printf("Asst. Manager in Production Dept\n");
			break;
		}
		break;
	}
	
	return(0);
}