// 1. Print transpose for uneven matrix

#include<stdio.h>
int main()
{
    int arr [6][6];
    int row ,col , i ,j ;
    printf("Enter row size, maximum row size is 6: ");
    scanf("%d", &row);
    printf("Enter column size, maximum column size is 6: ");
    scanf("%d", &col);
     
    for (i = 0; i < row; i++)
    {
        // column
        for (j = 0; j < col; j++)
        {
            printf("Enter element at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
        // Display normal matrix
    printf("Matrix of size %d * %d = \n", row, col);
    for (i = 0; i < row; i++)
    {
        // column
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of a matrix of size %d * %d = \n", col, row);
    for (i = 0; i < col; i++)
    {
        // column
        for (j = 0; j < row; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}