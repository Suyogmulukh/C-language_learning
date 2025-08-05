/*
Write a program that calculates the electricity bill
based on the following conditions:

For first 100 units: ₹5/unit
For next 100 units (101-200): ₹6/unit
For units above 200: ₹7/unit
*/

#include <stdio.h>
int main()
{
    int units;
    printf("Enter unit consumed: ");
    scanf("%d", &units);
    int total;

    if (units <= 100)
    {
        total = units * 5;
    }
    else if (units <= 200)
    {
        total = 500 + (units - 100) * 6;
    }
    else
    {
        total = 500 + 600 + (units - 200) * 7;
    }
    printf("Unit consumed = %d\nTotal Amount = %d INR", units, total);
}
