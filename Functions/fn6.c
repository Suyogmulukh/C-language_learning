#include<stdio.h>

void demo()
{
    static int num = 5 ;   // static key word are used to store the previous value and it's increment 
    printf("value of num is = %d \n" , num);
    num ++;
}
int main()
{
    demo();
    demo();
    demo();

}