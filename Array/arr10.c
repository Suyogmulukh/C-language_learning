#include <stdio.h>
int main()
{
    int arr[] = { 30,25,2,6,9,3,96,10,10,8 ,-9,-35,-90};
    int i,j;
    int size = sizeof(arr) / sizeof(int);
    int numOfPasses = size - 1;
    
    printf("Array before sorting: \n");
    for(i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    for (i = 0 ; i < size ; i++)
    {
        for (j = 0 ; j < size-i-1 ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
    printf("Array after sorting:\n");
    for(i = 0; i < size; i++)
    {
        printf("%d\t ", arr[i]);
    }
}