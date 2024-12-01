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

    if(a>b && a>c)
    {
        if(((a*a)-(b*b + c*c))==0)
        {
            printf("Right Angled");
        }else{
            printf("Not Right Angled");
        }
    }else if(b>a && b>c)
    {
        if(((b*b)-(a*a + c*c))==0)
        {
            printf("Right Angled");
        }else{
            printf("Not Right Angled");
        }
    }else if(c>a && c>b)
    {
       if(((c*c)-(a*a + b*b))==0)
        {
            printf("Right Angled");
        }else{
            printf("Not Right Angled");
        }
    }else{
        printf("Not Right Angled");
    }
    

    return (0);
}