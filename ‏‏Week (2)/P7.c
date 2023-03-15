#include <stdio.h>

int main()
{
int x,count=0 , q ;
printf (" Enter the number :");
scanf("%d",&x);
q=x;
while (q!=0)
{
    q=q/10 ;
    count++ ;
}
printf("The number of digits in %d = %d",x,count);

  return 0;
}
