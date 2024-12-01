#include<stdio.h>
int main()
{
    int a,b,c,temp;
    printf("Enter three angles of a tringle\n\n");
    printf("Enter angle a: ");
    scanf("%d",&a);
    printf("Enter angle b: ");
    scanf("%d",&b);
    printf("Enter angle c: ");
    scanf("%d",&c);

    if((a+b+c) != 180)
    {
        printf("Impossible to form a tringle");
    }else{

    if(a==b && b==c && c==a)
    {
        printf("Equilateral Triangle");
    }else if(a==b || b==c || c==a)
    {
        printf("Isosceles Tringle");
    }else if(a==90 || b==90 || c==90)
    {
        printf("Obtuse Tringle");
    }
    
    }
    

    return (0);
}