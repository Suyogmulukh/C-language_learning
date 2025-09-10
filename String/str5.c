/*
WAP to accept full name of student, branch = (IT engineering,Mech engin ) then marks of 5 subject
    display name and marks and total marks and average
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    char branch[20];
    int marks[5];
    printf("Enter the name :");
    fgets(name, 20, stdin);
    fflush(stdin);
    printf("Enter the branch :");
    fgets(branch, 20, stdin);
    fflush(stdin);
    printf("Enter the marks:\n");

    int i;
    for(i = 0; i < 5; i++) 
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    int total = 0;
    for(i = 0; i < 5; i++) 
    {
        total = total + marks[i];
    }
    float average = total / 5.0;
    printf("Name: %s", name);
    printf("Branch: %s", branch);
    printf("Total Marks: %d\n", total);
    printf("Average : %.2f\n", average);

}
