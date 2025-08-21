
// WAP to print natural numbers from n (user input value) using a for loop

#include<stdio.h>
int main (){
    int i ,n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        printf("%d \n", i);
    }
}