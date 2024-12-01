//To find the largest of three numbers

#include<stdio.h>

int main()
{
	int a,b,c,largest;
	printf("Enter three numbers\n");
	scanf("%d %d %d", &a,&b,&c);
	/*Finding the largest begins*/
	if((a>b)&&(a>c))
		largest=a;
	else if((b>a)&&(b>c))
		largest=b;
	else
		largest=c;
	/*Finding the largest ends*/
	printf("\nGiven Numbers %d %d %d\n",a,b,c);
	printf("\nLargest= %d\n",largest);
	
	return(0);
}