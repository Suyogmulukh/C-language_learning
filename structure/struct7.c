#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student_information{
	int rollNo ;
	char name[50];
	int age ;
	char gender[10];
}student;
int main()
{
	student *studentPtr = (student *)malloc(sizeof(student));
	printf("student information \n");
        printf("enter the rollNo = ");
        scanf("%d", &studentPtr->rollNo);
        fflush(stdin);
        printf("enter the name = ");
        fgets(studentPtr->name, 50, stdin);
        printf("enter the age = ");
        scanf("%d", &studentPtr->age);
        fflush(stdin);
        printf("enter the gender = ");
        fgets(studentPtr->gender, 10, stdin);
    
    printf("---------------------------------------------\n");
        printf("student details is \n");
        printf("ROLL NO is = %d\n", studentPtr->rollNo);
        printf("NAME is = %s", studentPtr->name);
        printf("AGE is = %d\n", studentPtr->age);
        printf("GENDER is = %s", studentPtr->gender);
}
