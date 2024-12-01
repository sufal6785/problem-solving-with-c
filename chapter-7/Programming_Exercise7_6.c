#include<stdio.h>
int main()
{
    int unit;
    double Total;

    printf("Enter the number of units: ");
    scanf("%d",&unit);

    if(unit>=0 && unit<101)
    {
        Total = unit*1.50;
    }else if(unit>100 && unit<301)
    {
        Total = unit*2.00;
    }else if(unit>300 && unit<501)
    {
        Total = unit*2.50;
    }else if(unit>500)
    {
        Total = unit*3.25;
    }


    printf("Total charge is: %.2lf",Total);

}