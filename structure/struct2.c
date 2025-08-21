/*
Create structure of employee with
empId, name, salary, department
create 3 employee take all input then display all 3 emps

*/

#include<stdio.h>
#include<string.h>

struct employee
{
    int empid;
    char name[50];
    int salary;
    char department[50];
};


int main()
{

    struct employee emp1;
    printf("enter the empid : ");
    scanf("%d", &emp1.empid);
    fflush(stdin);
    printf("enter the name : ");
    fgets(emp1.name, 50, stdin);
    printf("enter the salary : ");
    scanf("%d", &emp1.salary);
    fflush(stdin);
    printf("enter the department : ");
    fgets(emp1.department, 50, stdin);

    struct employee emp2;
    printf("enter the empid : ");
    scanf("%d", &emp2.empid);
    fflush(stdin);
    printf("enter the name : ");
    fgets(emp2.name, 50, stdin);
    printf("enter the salary : ");
    scanf("%d", &emp2.salary);
    fflush(stdin);
    printf("enter the department : ");
    fgets(emp2.department, 50, stdin);

    struct employee emp3;
    printf("enter the empid : ");
    scanf("%d", &emp3.empid);
    fflush(stdin);
    printf("enter the name : ");
    fgets(emp3.name, 50, stdin);
    printf("enter the salary : ");
    scanf("%d", &emp3.salary);
    fflush(stdin);
    printf("enter the department : ");
    fgets(emp3.department, 50, stdin);

    printf("--------------------------------------------\n");
    printf("emp1 data are := \n");
    printf("empid of is = %d\n", emp1.empid);
    printf("name of is = %s", emp1.name);
    printf("salary of is = %d\n", emp1.salary);
    printf("departments of is = %s", emp1.department);
    printf("--------------------------------------------\n");
    printf("emp2 data are := \n");
    printf("empid of is = %d\n", emp2.empid);
    printf("name of is = %s", emp2.name);
    printf("salary of is = %d\n", emp2.salary);
    printf("departments of is = %s", emp2.department);
    printf("--------------------------------------------\n");
    printf("emp3 data are := \n");
    printf("empid of is = %d\n", emp3.empid);
    printf("name of is = %s", emp3.name);
    printf("salary of is = %d\n", emp3.salary);
    printf("departments of is = %s", emp3.department);
    printf("--------------------------------------------\n");
}
