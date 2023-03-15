
#include <stdio.h>

int main()
{
    int size, i, n  ;

    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n Enter the integar : ");
    scanf("%d", &n);
    int array[size];
    printf("\n Enter %d elements of the array: \n", size);
    for (i = 0; i < size; i++)
    {
        scanf(" %d", &array[i]);
    }

      for (i = 0; i < size; i++)
      {

        if(array[i]==n){
         printf("the index %d",i);
         break;

            }
             if(array[i]!=n){
                 printf("0");
                 break;
             }

      }
return 0 ;

}







