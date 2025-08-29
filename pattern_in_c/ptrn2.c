/*
1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4
5       5       5       5       5

*/

#include <stdio.h>
int main()
{
    int i, j;
    // ROW
    for (i = 1; i <= 5; i++)
    {
        // COLUMN
        for (j = 1; j <= 5; j++)
        {
            printf("%d\t", i);
        }
        // Move cursor to next line (next row)
        printf("\n");
    }
}