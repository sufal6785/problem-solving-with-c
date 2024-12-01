#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%5==0 && num%6==0)
    {
        printf("%d is divisiable by both 5 and 6",num);
    }else if(num%5==0){
        printf("%d is divisiable by 5",num);
    }else if(num%6==0)
    {
        printf("%d is divisiable by 6",num);
    }else{
        printf("%d is not divisiable by 5 or 6",num);
    }

    return (0);
}