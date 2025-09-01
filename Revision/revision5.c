#include <stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int i = 1 ,table;

    while (i <= 10 )
    {
        table = n * i ;
       printf("%d * %d = %d \n", n, i, table);

        i++;
    }
}