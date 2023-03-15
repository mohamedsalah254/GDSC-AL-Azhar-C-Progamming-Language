#include <stdio.h>


int main()
{
    int a , b , c ;
    printf("Enter three different integers: ");
    scanf("%d %d %d",&a, &b ,&c);
    printf("Sum is %d \n", a+b+c);
    printf("Average is %d \n",(a+b+c)/3);
    printf("Product is %d \n ", a*b*c ) ;


    return 0;
}
