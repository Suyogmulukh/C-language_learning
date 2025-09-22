#include<stdio.h>
int main()
{
    int num1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int num2[3][3] = {
        {2,4,6},
        {1,3,5},
        {8,7,10}
    };
    int sum[3][3];
    int i, j;

    // Add the matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = num1[i][j] + num2[i][j];
        }
    }

    // print the original matrices
    printf("First Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", num1[i][j]);
        }
        printf("\n");
    }
    // print the second matrix
    printf("Second Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", num2[i][j]);
        }
        printf("\n");
    }
     // Print the result
    printf("Sum of two matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}