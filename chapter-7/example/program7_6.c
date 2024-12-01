//To illustrate the nested if statement

#include<stdio.h>

int main()
{
	int a,b,c,largest;
	printf("Enter three numbers\n");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
		largest=a;
		else
		largest=c;
	}
	else
	{
		if(b>c)
		largest=b;
		else
		largest=c;
	}
	
	printf("\nGiven Numbers %d %d %d\n",a,b,c);
	printf("\nLargest= %d\n",largest);
	
	return(0);
}