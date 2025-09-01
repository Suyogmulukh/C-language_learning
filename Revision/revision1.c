#include <stdio.h>
int main ()
{
    int num;
    printf ("enter the number : ");
    scanf("%d", &num);

    if (num %3 == 0 && num %5 == 0)
    {
        printf("Divisible by 3 and 5 both");
    }
    else if (num %3 == 0)
    {
        printf("only Divisible by 3");
    }
    else if (num %5 == 0)
    {
        printf("only Divisible by 5");
    }
    else
    {
        printf("not divisible by any");
    }
}