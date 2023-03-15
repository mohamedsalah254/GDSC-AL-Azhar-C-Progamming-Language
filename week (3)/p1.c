#include <stdio.h>
int main()
{
 int a ,b , c , d;
 printf("Enter the 4 values :" );
 scanf("%d %d %d %d",&a,&b,&c,&d);
printf("the maximum number = %d \n",max(a,b,c,d));
   printf("the minimum number = %d ",min(a,b,c,d));
    return 0;
}
int max(int n1 ,int n2 ,int n3 , int n4)
{
    if(n1>n2&&n1>n3&&n1>n4)
    {
        return n1 ;
    }
    else if(n2>n1&&n2>n3&&n2>n4)
    {
        return n2 ;
    }
    else if(n3>n1&&n3>n2&&n3>n4)
    {
        return n3;
    }
     else
     {
         return n4 ;
     }
}
int min(int n1 ,int n2 ,int n3 , int n4)
{
    if(n1<n2&&n1<n3&&n1<n4)
    {
        return n1 ;
    }
    else if(n2<n1&&n2<n3&&n2<n4)
    {
        return n2 ;
    }
    else if(n3<n1&&n3<n2&&n3<n4)
    {
        return n3;
    }
     else
     {
         return n4 ;
     }
}
