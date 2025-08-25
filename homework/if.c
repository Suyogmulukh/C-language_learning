//  WAP to check whether the num  ber is palindrome or not using for loop

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int reverse = 0;
    int last_digit;
    int i = n;
    for(; i != 0; i = i / 10) {
        last_digit = i % 10;
        reverse = reverse * 10 + last_digit;
    }
    if (n == reverse) {
        printf("%d is a Palindrome Number its Answer is %d\n", n, reverse);
    } else {
        printf("%d is Not a Palindrome Number its Answer is %d\n", n, reverse);
    }
    
}