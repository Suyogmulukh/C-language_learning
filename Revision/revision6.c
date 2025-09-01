#include <stdio.h>
int main()
{
    int n ;
    printf("enter the number :");
    scanf ("%d",&n);
    
    int i = 1 ,table;

    while (i <= n )
    {
        table = i * i ;
        printf("the square of %d is %d\n", i,table);
        i++;
    }
    
}