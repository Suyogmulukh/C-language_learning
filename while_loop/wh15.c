// WAP to check whether the number is palindrome or not
// EX: n = 183 -> Reverse = 381 -> Not a Palindrome
// n = 1551 -> Reverse = 1551 -> Palindrome Number

#include <stdio.h>

int main(){
    int n ;
    printf("Enter a number: ");
    scanf("%d", &n);
    int reverse = 0;
    int last_digit;
    int i = n;
    while (i != 0) {
        last_digit = i % 10;
        reverse = reverse * 10 + last_digit;
        i = i / 10;
    }
    if (n == reverse) {
        printf("%d is a Palindrome Number it's Answer is %d\n", n , reverse);
    } else {
        printf("%d is Not a Palindrome Number its Answer is %d\n", n, reverse);
    }
    
}