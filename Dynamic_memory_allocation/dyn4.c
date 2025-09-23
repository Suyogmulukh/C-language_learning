// Accept float marks in dynamic array of 5 subjects of first semester -> display marks
// then add marks of 5 subject later on of second semester -> display marks
// display average of first sem and avg of second semester at the end


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int semester1 = 5;
    float sum1 = 0, sum2 = 0;
    printf("Enter marks for %d subjects in first semester:\n", semester1);

    float *ptr = (float *)calloc(semester1, sizeof(float));
    for (int i = 0; i < semester1; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", ptr + i); 
        sum1 = sum1 + ptr[i];
    }

    printf("-----------------------------------------------------------\n");
    
    // Add marks for second semester
    int semester2 = semester1 + 5;
    ptr = (float *)realloc(ptr, semester2 * sizeof(float));
    printf("Enter marks for next 5 subjects in second semester:\n");
    for (int i = semester1; i < semester2; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%f", ptr + i);
        sum2 = sum2 + ptr[i];
    }
    
    printf("\nMarks from first semester:\n");
    for (int i = 0; i < semester1; i++)
    {
        printf("%.2f\t", ptr[i]);
    }
    printf("\nMarks from second semester:\n");
    for (int i = semester1; i < semester2; i++)
    {
        printf("%.2f\t", ptr[i]);
    }
    printf("\n");
    printf("\nAverage of first semester: %.2f\n", sum1 / semester1);
    printf("Average of second semester: %.2f\n", sum2 / semester1);
    printf("total average first and second semester is %.2f:\n",(sum1+sum2)/10);
    free(ptr);
}