#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5, i, j ;
    printf("Enter the subject 1 marks: ");
    scanf("%d", &s1);
    printf("Enter the subject 2 marks: ");  
    scanf("%d", &s2);
    printf("Enter the subject 3 marks: ");
    scanf("%d", &s3);
    printf("Enter the subject 4 marks: ");
    scanf("%d", &s4);
    printf("Enter the subject 5 marks: ");
    scanf("%d", &s5);
    int total = s1 + s2 + s3 + s4 + s5;
    float p = (float)total / 5;
    printf("Total marks: %d\n", total);
    printf("Percentage: %f\n", p);
    if (p >= 90) {
        printf("Grade: A\n");
    } else if (p >= 65) {
        printf("Grade: B\n");
    } else if (p >= 55) {
        printf("Grade: C\n");
    } else if( p >= 35){
        printf("Grade: D\n");
    }
    else {
        printf("Grade: F\n");
    }
}