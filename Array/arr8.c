// 2. WAP to reverse a given array inplace
// {2,5,10,-5,6}
// Output -> {6,-5,10,5,2}
#include <stdio.h>
int main()
{
    int arr[] = {2, 5, 10, -5, 6};
    int length = sizeof(arr) / sizeof(int);
    
    // Print original array
    printf("Original array:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array in place
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }

    // Print reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}