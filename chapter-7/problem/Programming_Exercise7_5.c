#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    if(x<50)
    {
        y = 2*x + 100;
    }else if(x=50)
    {
        y = 3*x + 300;
    }else if(x>50)
    {
        y = 5*x -200;
    }

    printf("The value of y is: %d",y);

}