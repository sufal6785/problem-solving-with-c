//To grade a sudent

#include<stdio.h>

int main()
{
	int m1,m2,m3,m4,m5,flag;
	float percent;
	printf("Enter marks in five subjects\n");
	scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
	
	printf("\nSubject1 : %d",m1);
	printf("\nSubject2 : %d",m2);
	printf("\nSubject3 : %d",m3);
	printf("\nSubject4 : %d",m4);
	printf("\nSubject5 : %d\n",m5);
	
	flag=1;
	if(m1<35)
	{
		printf("Failed in subject1\n");
		flag=0;
	}
	if(m2<35)
	{
		printf("Failed in subject2\n");
		flag=0;
	}
	if(m3<35)
	{
		printf("Failed in subject3\n");
		flag=0;
	}
	if(m4<35)
	{
		printf("Failed in subject4\n");
		flag=0;
	}
	if(m5<35)
	{
		printf("Failed in subject5\n");
		flag=0;
	}
	
	if(flag)
	{
		percent=(float)(m1+m2+m3+m4+m5)/5;
		
		if(percent<50)
			printf("\n Grade : Just Pass");
		else if(percent<60)
			printf("\n Grade : Second class");
		else if(percent<70)
			printf("\n Grade : First class");
		else
			printf("\n Grade : Outstanding");
	}
	
	return(0);
}