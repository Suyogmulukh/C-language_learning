#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student_structure 
{
    int rollNo;
    char name[50];
    int age;
    char gender[10];
}student;
int main()
{
    student *studentPtr = (student *)malloc(sizeof(student));
    studentPtr->rollNo = 50;
    strcpy(studentPtr->name , "SPRK TECH");
    strcpy(studentPtr->gender , "Male");
    studentPtr->age = 20;

    printf("---------------------------------------------\n");
    printf("Student Information\n");
    printf("Roll No = %d\n", studentPtr->rollNo);
    printf("Name = %s\n", studentPtr->name);
    printf("Gender = %s\n", studentPtr->gender);
    printf("Age = %d\n", studentPtr->age);
}