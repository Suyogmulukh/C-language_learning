// WAP to print sum of digit of n using recursion


#include<stdio.h>
int sumOfDigit(int num) 
{
    if (num == 0)
    {
        return 0;
    }
    return (num % 10) + sumOfDigit(num / 10);
}
int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = sumOfDigit(n);
    if (result == 0 && n != 0) 
    {
        printf("Enter a positive number to calculate sum of digits\n");
    } 
    else 
    {
        printf("The sum of digits of %d is = %d\n", n, result); 
    }
}