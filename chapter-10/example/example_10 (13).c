#include<stdio.h>

int main(void){
	int a[2][2][2], i, j, k;
	
	printf("Enter the elements of a of order 2*2*2\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		for(k=0; k<2; k++)
			scanf("%d",&a[i][j][k]);
	}
	printf("\nThe 3-D array a\n\n");
	for(i=0; i<2; i++)
	{
		printf("a-Table %d \n\n",i+1);
		for(j=0; j<2; j++)
		{
			for(k=0; k<2; k++)
				printf("%4d",a[i][j][k]);
			printf("\n");
		}
		
		printf("\n");
	}
	
	return 0;
}