#include<stdio.h>

void display(int [][10],int ,int);

int main(void)
{
	int a[10][10],m,n,i,j;
	
	printf("enter the size of matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of matrix a\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	display(a,m,n);
	
	return 0;
}

void display(int a[][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
			printf("\n");
		}
	}
}