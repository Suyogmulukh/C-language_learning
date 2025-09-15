#include<stdio.h>

void table()
{
    int n ,i ;
    int result = 0;
    printf("Enter the number ");
    scanf("%d",&n);

    for(i = 1; i <= 10 ; i++)
    {
        result = n * i ;
        printf("table of is %d * %d = %d\n",n,i,result);
    }
}
int main()
{
    table();
    table();
    table();
}