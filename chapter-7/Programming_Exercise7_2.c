#include<stdio.h>
int main()
{
    int month1,year1,days1,month,days,year;

    printf("Enter the dates in Day/Month/Year format\n\n\n");
    printf("Enter first date\n\n");
    printf("Enter Day: ");
    scanf("%d",&days);
    printf("Enter Month: ");
    scanf("%d",&month);
    printf("Enter year: ");
    scanf("%d",&year);
    printf("Enter first date\n\n");
    printf("Enter Day: ");
    scanf("%d",&days1);
    printf("Enter Month: ");
    scanf("%d",&month1);
    printf("Enter year: ");
    scanf("%d",&year1);

    if(year1>year)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d",days,month,year,days1,month1,year1);
    }else if(year1<year)
    {
        printf("%d/%d/%d is not earlier than %d/%d/%d",days,month,year,days1,month1,year1);
    }else if(year == year1)
    {
        if(month>month1){
            printf("%d/%d/%d is not earlier than %d/%d/%d",days,month,year,days1,month1,year1);
        }else if(month<month1)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d",days,month,year,days1,month1,year1);
        }else{
            if(days>days1)
            {
                printf("%d/%d/%d is not earlier than %d/%d/%d",days,month,year,days1,month1,year1);
            }else if(days<days1)
            {
                 printf("%d/%d/%d is earlier than %d/%d/%d",days,month,year,days1,month1,year1);
            }else{
                printf("Dates are same");
            }
        }
    }

    return (0);
}