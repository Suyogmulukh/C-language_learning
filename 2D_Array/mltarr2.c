#include<stdio.h>
int main ()
{
    int marks [][3] = {
        {2,3,90},
        {3,9,2},
        {89,9,78},
        {34,29,12}
    };
    int i,j;
    printf("elements are :\n");
    for (i = 0 ; i < 4 ;i++)
    {
        for(j = 0 ; j < 3; j++)
        {
            printf("%d\t" , marks[i][j]);
        }
        printf("\n");
    } 
}