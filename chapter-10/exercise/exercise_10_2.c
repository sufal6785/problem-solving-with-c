#include<stdio.h>
int main(){
	int n;
	printf("Input n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
	scanf("%d", arr+i);
	}
	int oddsum=0;
	int evensum = 0;
	for(int i = 0; i < n; i++){
	if(*(arr+i)%2){
		oddsum+= *(arr+i);
	}
	else evensum+= *(arr+i);
	}
	printf("Sum of even element = %d\n",evensum);
	printf("Sum of odd element = %d\n",oddsum);
	
	return(0);
}