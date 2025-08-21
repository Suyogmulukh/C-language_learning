
//  WAP to print factorial of numbers from 1 to 10 using a for loop

#include<stdio.h>
int main ()
{
    int i, fact = 1;
    for (i = 5 ; i >= 1 ; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d\n", i, fact);
}