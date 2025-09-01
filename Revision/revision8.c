#include<stdio.h>
int main ()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int i = n ;
    int j = 1;
    int temp;

       while (n > 0) {
            temp = n % 10;       
            j = j * temp;     
            n = n / 10;            
        }
    

    printf("Multiplication of digits = %d\n", j);
    

}