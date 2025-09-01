#include<stdio.h>
int main()
{
    int n,x ;
    printf ("enter the till :");
    scanf("%d",&n);
    printf("enter the iteration :");
    scanf("%d",&x);

    int i = 1 ,table;

    while (i <= x )
    {
        table = n * i ;
        printf("%d * %d = %d\n", n,i,table);
        i++;
    }
}