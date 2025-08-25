#include <stdio.h>
int main()
{
    int n, i, j, sp;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}