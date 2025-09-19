#include<stdio.h>
int main ()
{
    int arr[5];
    int i; 
    for(int i = 0; i < 5; i++) {
        printf("enter Element at position %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}