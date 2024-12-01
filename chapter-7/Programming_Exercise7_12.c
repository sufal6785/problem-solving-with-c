#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter point on x axis: ");
    scanf("%d",&x);
    printf("Enter point on y axis: ");
    scanf("%d",&y);

    if((x*x + y*y)<25)
    {
        printf("Inside the circle");
    }else if((x*x + y*y)==25)
    {
        printf("On the circle");
    }else if((x*x + y*y)>25)
    {
        printf("Outside the circle");
    }

 return (0);
}