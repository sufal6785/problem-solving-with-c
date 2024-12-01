#include<stdio.h>
int main()
{
    int a,b,c,temp;
    printf("Enter three sides of a tringle\n\n");
    printf("Enter side a: ");
    scanf("%d",&a);
    printf("Enter side b: ");
    scanf("%d",&b);
    printf("Enter side c: ");
    scanf("%d",&c);

    if(a==b && b==c && c==a)
    {
        printf("Equilateral Triangle");
    }else if(a==b || b==c || c==a)
    {
        printf("Isosceles Tringle");
    }else{
        printf("Not Equilateral or Isosceles Tringle");
    }
    

    return (0);
}