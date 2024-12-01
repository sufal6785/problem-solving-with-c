#include<stdio.h>
int main()
{
    int code;
    printf("Enter color code: ");
    scanf("%d",&code);

    switch (code)
    {
    case 1: printf("Red");
        break;
    case 2: printf("Blue");
        break;
    case 3: printf("Green");
        break;
    case 4: printf("Yellow");
        break;
    case 5: printf("Purple");
            break;
    
    default: printf("Not a valid color code");
        break;
    }

    return (0);
}