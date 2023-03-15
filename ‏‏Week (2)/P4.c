#include <stdio.h>

int main()
{
 int i ;
 float sum=0 ;
 float avg ;
 for (i=1 ; i<=10 ; i++)
 {
 sum=sum+i;
 }
 avg= sum/10 ;
 printf("The sum of 10 numbers = %.1f\n", sum);
 printf("The average of 10 numbers =%.1f",avg);

  return 0;
}
