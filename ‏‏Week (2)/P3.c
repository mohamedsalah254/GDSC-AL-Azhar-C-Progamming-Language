#include <stdio.h>

int main()
{
    int x ;
    printf("Enter the day number (1-7) :");
    scanf("%d",&x);
    switch(x)
    {
        case 1 : printf("The day name is saturday");
        break ;
        case 2 : printf("The day name is sunday");
        break ;
        case 3 : printf("The day name is monday");
        break ;
        case 4 : printf("The day name is tuesday");
        break ;
        case 5 : printf("The day name is Wednesday");
        break ;
        case 6 : printf("The day name is Thursday");
        break ;
        case 7 : printf("The day name is friday");
        break ;
        default: printf("Please enter a number between 1-7.");

    }


  return 0;
}
