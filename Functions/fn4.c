// CREATE 2 function
// In fn 1 take 2 number input and display subtraction of both numbers -> 5,3 = 2
// In fn 2 pass same 2 numbers and calculate power -> 5 power 3 -> 125
// in main call only first function

#include<stdio.h>
void power(int a , int b)
{
    int result = 1;
    for (int i = 1 ; i <= b; i++)
    {
         result = result * a;
    }
    printf("power of two numbers is = %d\n", result);
}
void subtraction()
{
    int num1 ,num2 ;
    printf("Enter 2 the value :\n");
    scanf("%d %d" , &num1 ,&num2);
    int result;
    result = num1 - num2 ;
    printf("subtraction of two numbers is = %d\n",result);
    power(num1, num2);
}
int main()
{
    subtraction();
}