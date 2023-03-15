
#include <stdio.h>

int main()
 {

  char op;
  int num1, num2;
 printf("Enter an operator (+, -, *, /): ");
 scanf("%c", &op);
 printf("Enter two numbers: \n");
  scanf("%d %d", &num1, &num2);
  if(op == '+')
  {
      printf("%d + %d =%d",num1,num2,sum(num1,num2));
  }
  else if (op == '-')
  {
      printf("%d - %d =%d",num1,num2,sub(num1,num2));
  }
  else if (op == '*')
  {
      printf("%d * %d =%d",num1,num2,mul(num1,num2));
  }
   else
  {
      printf("%d / %d =%d",num1,num2,div(num1,num2));
  }

}
 int sum(int n1  ,int n2 )
 {
     return n1+n2 ;
 }
 int sub(int n1  ,int n2 )
 {
     return n1-n2 ;
 }
 int mul(int n1  ,int n2 )
 {
     return n1*n2 ;
 }
 float div(int n1  ,int n2 )
 {
     return n1/n2 ;
 }
