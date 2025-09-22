
// 2. WAP to accept row and col size and element from user in matrix
// Display matrix and then show diagonal (primary, secondary)
// if that matrix is square matrix

#include <stdio.h>
int main()
{
    // create array
    int arr[6][6];
    int row, col, i, j;
    printf("Enter row size, maximum row size is 6: ");
    scanf("%d", &row);
    printf("Enter column size, maximum column size is 6: ");
    scanf("%d", &col);

    if (row > 6)
    {
        row = 6;
    }
    if (col > 6)
    {
        col = 6;
    }

    // Take input in array.
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter element at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display Matrix
    printf("Matrix of size %d * %d\n", row, col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    if(row == col)
    {
    // primary diagonal
    printf("Matrix of primary diagonal is\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j || i + j == row -1)
            {
            printf("%d\t", arr[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }
}
else
{
    printf("row %d and colume %d size are not same" , row,col);
}
}