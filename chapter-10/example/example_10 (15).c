#include<stdio.h>

int main(void)
{
	int sales[2][5][7], i, j, k;
	
	printf("Enter sales figures of two salesmen\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++){
			printf("Enter sales figures of item %d by salesman %d for a week\n",i+1,j+1);
			for(k=0;k<7; k++){
				scanf("%d",&sales[i][j][k]);
			}
		}
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++){
			printf("Weekly sales figures of salesman %d each row\n",i+1);
			for(k=0;k<7; k++){
				printf("%4d",sales[i][j][k]);
				printf("\n");
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}