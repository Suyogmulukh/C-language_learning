
// 3. WAP to print odd and even value sum from 1 to 10 using only one loop
// 1 2 3 4 5 6 7 8 9 10
// odd = 1 + 3 + 5 + 7 + 9 =25
// even = 2 + 4 + 6 + 8 + 10 = 30
// Even sum from 1 to 10 is 30
//  Odd sum from 1 to 10 is 25
// 

#include <stdio.h>
int main(){
    int i = 1, evensum = 0, oddsum = 0;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            evensum = evensum + i; 
        } else {
            oddsum = oddsum + i; 
            printf("Odd sum from 1 to 10 is %d\n", oddsum);
        }
    }
    printf("Even sum from 1 to 10 is %d\n", evensum);
} 