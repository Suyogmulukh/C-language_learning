#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int empid;
    char name[50];
    int salary;
    char department[50];
}employees;


int main()
{

    // struct employee emp1[3];
    employees emp1[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Employee information %d\n" ,i + 1);
        printf("enter the empid : ");
        scanf("%d", &emp1[i].empid);
        fflush(stdin);
        printf("enter the name : ");
        fgets(emp1[i].name, 50, stdin);
        printf("enter the salary : ");
        scanf("%d", &emp1[i].salary);
        fflush(stdin);
        printf("enter the department : ");
        fgets(emp1[i].department, 50, stdin);
    }

    for (i = 0; i < 3; i++)
    {
        printf("--------------------------------------------\n");
        printf("Employee information %d\n" ,i + 1);
        printf("empid of is = %d\n", emp1[i].empid);
        printf("name of is = %s", emp1[i].name);
        printf("salary of is = %d\n", emp1[i].salary);
        printf("departments of is = %s", emp1[i].department);
    }

}