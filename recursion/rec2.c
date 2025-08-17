// WAP to print sum of 1 to n using recursion


#include<stdio.h>

int sum (int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 0)
    {
        return 0;
    }
    return num + sum(num - 1);
}
int main()
{

    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = sum(n);
    printf("The sum of %d is = %d\n", n, result);
}