#include<stdio.h>
int main()
{
    int month,year,days;

    printf("Enter Date\n");
    printf("Enter Day: ");
    scanf("%d",&days);
    printf("Enter Month: ");
    scanf("%d",&month);
    printf("Enter year: ");
    scanf("%d",&year);

    if(month<1 || month>12)
    {
        printf("Invalid date");
    }else if(days<1 || days>31)
    {
        printf("Invalid date");
    }else{

    if((year%4 == 0) && (year%100!=0) || (year%400)==0 )
    {
        if(month == 2 && days>29)
        {
            printf("Invalid date");
        }else{
            printf("Valid date");
        }
    }else if(month == 2 && days>28)
    {
        printf("Invalid date");
    }
    else if((month = 4) || (month = 6) || (month = 9) || (month = 11) )
    {
        if(days>30)
        {
            printf("Invalid date");
        }else{
            printf("Valid date");
        }
    }

    }
}