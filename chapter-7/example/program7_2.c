//To find the largest of three numbers
#include<stdio.h>
	int main()
{
	int a,b,c,largest;
	printf("Enter the three numbers \n");
	scanf("%d %d %d", &a, &b, &c);
//Finding the largest begins
	largest=a;
	if(b>largest)
		largest=b;
	if(c>largest)
		largest=c;
//Finding the largest ends
	printf("\nGiven Numbers: a=%d b=%d c=%d\n",a,b,c);
	printf("\nLargest= %d\n",largest);
	
	return(0);
}