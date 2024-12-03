#include<stdio.h>

int main(void)
{
	int a[2][2][2] = {1,2,3,4,5,6,7,8};
	int b[2][2][2] = {{{1,2},{3,4},{5,6},{7,8}}};
	
	int i,j,k;
	printf("Array a\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++)
				printf("%4d",a[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
	printf("Array b\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			for(k=0; k<2; k++)
				printf("%4d",b[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}