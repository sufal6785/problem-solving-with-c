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
        if((a-b-c)<0)
        {
            printf("The sides form a tringle");
        }else{
            printf("The sides do not form a tringle");
        }
    }else if(b>a && b>c)
    {
        if((b-a-c)<0)
        {
            printf("The sides form a tringle");
        }else{
            printf("The sides do not form a tringle");
        }
    }else if(c>a && c>b)
    {
        if((c-a-b)<0)
        {
            printf("The sides form a tringle");
        }else{
            printf("The sides do not form a tringle");
        }
    }else if(a==b && b==c && c==a){
        printf("The sides form a tringle");
    }
    

    return (0);
}