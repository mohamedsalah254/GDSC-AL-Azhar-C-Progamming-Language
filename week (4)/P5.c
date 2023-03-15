
#include <stdio.h>

int main()
{
    int size, i, min;

    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];



    printf("\n Enter %d elements of the array: \n", size);

    for (i = 0; i < size; i++)
    {
        scanf(" %d", &array[i]);
    }


    min = array[0];

    for (i = 1; i < size; i++)
    {
        if (min > array[i])
        min = array[i];
    }

    printf("\n min element present in the given array is : %d", min);

    return 0;
}
