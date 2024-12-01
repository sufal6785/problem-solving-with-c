#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter a,b,c values of a quadratic equation ax^2 + bx + c = 0\n\n");

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);

    double d,x1,x2;

    d = sqrt(b*b - 4*a*c);

    x1 = (-b+d)/2;
    x2 = (-b-d)/2;

    printf("The solutions of the equation are: %.2lf,%.2lf",x1,x2);


    return (0);
}