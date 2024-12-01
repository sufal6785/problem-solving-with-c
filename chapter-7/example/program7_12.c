//To illustrate switch structure

#include<stdio.h>

int main()
{
	int a,b,sum, diff, product,rem;
	float quotient;
	char operator;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	fflush(stdin);
	printf("Enter an operator\n");
	operator=getchar();
	
	switch(operator)
	{
		case '+':
			sum=a+b;
			printf("Sum= %d\n",sum);
			break;

		case '-':
			diff=a-b;
			printf("Difference= %d\n",diff);
			break;

		case '*':
			product=a*b;
			printf("Product= %d\n",product);
			break;

		case '/':
			quotient=(float)a/b;
			printf("Quotient= %f\n",quotient);
			break;

		case '%':
			rem=a%b;
			printf("Remainder= %d\n",rem);
			break;

		default :
			printf("Not a valid operator");

			
	}
	
	return(0);
}