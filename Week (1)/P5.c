#include <stdio.h>

int main()
{
    float a , b ;
 printf("Input any two numbers :");
 scanf("%f %f", &a ,&b);
 printf("The sum of the given numbers : %.0f \n", a+b);
 printf("The difference of the given numbers : %.0f \n", a-b);
 printf("The product of the given numbers : %.0f \n", a*b);
 printf("The quotient of the given numbers : %.6f",a/b);
    return 0;
}
