#include <stdio.h>
int main()
{
    int arr[5];
    int i;

    // Input
    for (i = 0; i < 5; i++)
    {
        printf("Enter element at position %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print Array
    printf("Array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    // Logic for checking if its sorted or not
    int sorted = 0; // Assume input array is sorted

    for (i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // Not sorted
            sorted = 1;
            break;
        }
    }
    if (sorted == 0)
    {
        printf("\nArray is sorted\n");
    }
    else
    {
        printf("\nArray is not sorted\n");
    }
}