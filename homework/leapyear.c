

#include<stdio.h>
int main()
{
    int i , j , n ;
    printf("Enter the number: ");
    scanf("%d", &n);
    if ( n % 4 == 0 && ( n % 100 != 0 || n % 400 == 0)) 
    {
        printf("%d this is leap year\n", n);
    }
    else {
        printf("%d this is not leap year\n", n);
    }
}