#include<stdio.h>

void addition(){
    int num1 ,num2 ;
    int result;
    printf("Enter the 2 numbers");
    scanf("%d%d",&num1 ,&num2);

    result = num1 + num2;
    printf("Addition of %d ,%d = %d\n" ,num1,num2,result);
}

int main()
{

    addition();
    addition();
    addition();
}