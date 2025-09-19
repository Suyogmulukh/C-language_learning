// WAP to maximum and minimum element present in array

#include<stdio.h>
int main()
{
    int arr[] = {20,80,-5,10,3,6,-25,120,-30};
    int length = sizeof(arr) / sizeof(int);
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < length; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element present in array is %d\n", max);
    printf("Minimum element present in array is %d\n", min);
}