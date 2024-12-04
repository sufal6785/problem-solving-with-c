#include<stdio.h>
void accept(int a[][10],int m,int n);
void display(int  a[][10],int m,int n);
void subtract(int a[][10],int b[][10],int c[][10],int m,int n);

int main(void)
{
	int a[10][10],b[10][10],c[10][10],m,n;
	printf("enter the number of rows and coloumns of the matrices\n");
	scanf("%d%d",&m,&n);
	printf("enter the element of matrix a\n");
	accept(a,m,n);
	printf("matrix a\n");
	display(a,m,n);
	printf("enter the elements of matrix b\n");
	accept(b,m,n);
	printf("matrix b\n");
	display(b,m,n);
	subtract(a,b,c,m,n);
	printf("resultant matrix c\n");
	display(c,m,n);
	return 0;
	
	
}
void accept(int a[][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
		
}
void display(int a[][10],int m,int n)
{
	int i,j;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
			printf("\n");
			
	}
}
void subtract (int a[][10],int b[][10], int c[][10],int m, int n)
{
	int i,j;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
		c[i][j]=a[i][j]-b[i][j];
		
}