// WAP to print fibonacci series 1 to 10 using a for loop
#include <stdio.h>
int main() {
    int n1 = 0, n2 = 1, num, i ,n;
    printf ("enter the number :");
    scanf("%d", &n);
    printf( "Fibonacci series: %d, %d, ", n1, n2);
    
    for (i = 3; i <= n; i++) {
        num = n1 + n2;
        printf("%d, ", num);
        n1 = n2;
        n2 = num;
    }
}