#include <stdio.h>


int main()
{
    int x  ;
    int y = 1 ;
    printf("Enter the integer : ");
    scanf("%d",&x);
   while (y<=12)
   {
       printf("%d * %d = %d \n",x,y , x*y);
       y++ ;
   }
    return 0;
}
