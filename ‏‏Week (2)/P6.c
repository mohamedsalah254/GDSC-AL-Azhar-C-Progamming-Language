#include <stdio.h>

int main()
{
int number , result=0 , q,rem;
printf("Enter the number you want to reverse :");
scanf("%d",&number);
q = number ;
while(q!=0)
{
    rem=q%10 ;
    result = result*10 +rem ;
    q=q/10;
}
printf("%d after reverse is %d",number,result);


  return 0;
}
