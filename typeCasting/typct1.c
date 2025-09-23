/* 
1. Implicit typeCasting
2. explicit typeCasting
*/

#include<stdio.h>
int main()
{
    char alp = 'A';
    int num = alp;

    printf("value of int is %d, value of character is %c\n", num, alp);
    int num1 = 5, num2 = 2;
    int result = num1 / num2;

    printf("Division of %d ,%d = %d\n", num1, num2, result);
    // double division = (division)num1 / num2;
    // printf("Division of %d ,%d = %d\n", num1, num2, division);
    

    // 2 ex
    int x = 5;
    double d = 2.3;
    double ans = x + d;
    printf("%2f\n", ans);
}