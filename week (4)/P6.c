
#include <stdio.h>

int main()
{
    int size, i, avg , sum;

    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];



    printf("\n Enter %d elements of the array: \n", size);

    for (i = 0; i < size; i++)
    {
        scanf(" %d", &array[i]);
    }


    sum = 0;

    for (i = 0; i < size; i++)
    {

        sum += array[i];
    }
    avg=sum/size;

    printf("\n average element present in the given array is : %d", avg);

    return 0;
}
