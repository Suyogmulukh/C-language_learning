/*
        * 
      * *
    * * *
  * * * *
* * * * *
  * * * *
    * * *
      * *
        *

*/

#include<stdio.h>
int main()
{
    int i,j,n,sp;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // SPACE
        for (sp = 1; sp <= n - i; sp++)
        {
            printf("  ");
        }

        // STAR (j)
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        // NEXT LINE
        printf("\n");
    }
    for (i = 2 ; i <= n ; i++)
     {
        for (sp = 1; sp < i ; sp++)
        {
            printf("  ");
        }
        for (j = 1 ; j <= n - i + 1 ; j++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
}