#include<stdio.h>
int main()
{
    int marks[5][2];
    int i,j ;
    int sum = 0; // initialize sum to 0
    for( i = 0 ; i < 5 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            printf("Enter the elements at position %d, %d:", i ,j);
            scanf("%d",&marks[i][j]);
        }
    }
    printf("matrix size 5 * 2 is :\n");
    for( i = 0 ; i < 5 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            printf("%d\t",marks[i][j]);
            sum = sum + marks[i][j]; 
        }
        printf("\n");
    }
    printf("sum of matrix %d", sum);
}