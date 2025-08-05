/* WAP to check whether the number is positive or negative or zero
   input = 1
   conditions = 3
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Number = %d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("Number = %d is negative\n", n);
    }
    else
    {
        printf("Number = %d is zero\n", n);
    }
}
