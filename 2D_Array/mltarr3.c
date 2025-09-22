#include<stdio.h>
int main()
{
    int marks[4][3];
    int i,j ;
    
    for( i = 0 ; i < 4 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("Enter the elements at position %d, %d:", i ,j);
            scanf("%d",&marks[i][j]);
        }
    }
    printf("matrix size 4 * 3 is :\n");
    for( i = 0 ; i < 4 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
}