#include<stdio.h>
void display(int a[][2][2],int i,int r,int c);

int main(void)
{
	int a[2][2][2]={1,2,3,4,5,6,7,8};
	
	display(a,2,2,2);
	return 0;
	
}
void display(int a[][2][2],int t,int r,int c)
{
	int i,j,k;
	for(i=0;i<t;i++)
	{
		printf("table %d\n",i+1);
		for(j=0;j<r;j++)
		{
			for(k=0;k<c;k++)
			printf("%4d",a[i][j][k]);
			printf("\n");
			
		}
		printf("\n");
	}
}