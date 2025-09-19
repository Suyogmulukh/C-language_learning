#include <stdio.h>
int main()
{
    int marks[5];
    marks[0] = 5;
    marks[1] = 3;
    marks[2] = 8;
    marks[3] = 4;
    marks[4] = 9;

    printf("Element at position 0 is = %d\n", marks[0]);
    printf("Element at position 1 is = %d\n", marks[1]);
    printf("Element at position 2 is = %d\n", marks[2]);
    printf("Element at position 3 is = %d\n", marks[3]);
    printf("Element at position 4 is = %d\n", marks[4]);
    
    printf("Address of 1st element in array is %d\n" ,marks);
    printf("Address of 2st element in array is %d\n" ,marks +1);
    printf("Address of 3st element in array is %d\n" ,marks +2);
    printf("Address of 4st element in array is %d\n" ,marks +3);
    printf("Address of 5st element in array is %d\n" ,marks +4);
    
    printf("\n");
    printf("Address of 1st element in array is %d\n" ,&marks);
    printf("Address of 2st element in array is %d\n" ,&marks [1]);
    printf("Address of 3st element in array is %d\n" ,&marks [2]);
    printf("Address of 4st element in array is %d\n" ,&marks [3]);
    printf("Address of 5st element in array is %d\n" ,&marks [4]);

}

