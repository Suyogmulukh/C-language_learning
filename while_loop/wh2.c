// WAP to print below series
// 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100
// start = 5, stop = 100, gap = 5

#include <stdio.h>
int main()
{
    // initialization
    int i = 5;

    while (i <= 100)
    {
        printf("%d\n", i);

        // Increment
        // i = i + 5;
        // Arithmatic Assignment Operator
        i += 5;
    }
}