
// WAP to print the multiplication table of 5 using a for loop

#include<stdio.h>
int main() {
    int i, table;
    for (i = 1; i <= 10; i++)
     {
        table = 5 * i;
        printf("5 X %d = %d\n", i, table);
    }
}
