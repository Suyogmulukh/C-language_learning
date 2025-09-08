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

    student *studentptr = (student *) malloc(sizeof(student));
        printf("student information \n");
        printf("enter the rollNo = ");
        scanf("%d", &studentptr->rollNo);
        fflush(stdin);
        printf("enter the name = ");
        fgets(studentptr->name, 50, stdin);
        printf("enter the age = ");
        scanf("%d", &studentptr->age);
        fflush(stdin);
        printf("enter the gender = ");
        fgets(studentptr->gender, 10, stdin);
    
    printf("---------------------------------------------\n");
        printf("student details is \n");
        printf("ROLL NO is = %d\n", studentptr->rollNo);
        printf("NAME is = %s", studentptr->name);
        printf("AGE is = %d\n", studentptr->age);
        printf("GENDER is = %s", studentptr->gender);
}