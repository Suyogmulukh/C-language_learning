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

    struct employee emp[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Employee information %d\n", i+1);
        printf("enter the empid = ");
        scanf("%d", &emp[i].empid);
        fflush(stdin);
        printf("enter the name = ");
        fgets(emp[i].name, 50, stdin);
        printf("enter the salary = ");
        scanf("%d", &emp[i].salary);
        fflush(stdin);
        printf("enter the department = ");
        fgets(emp[i].department, 50, stdin);
    }
    for (i = 0; i < 3;i++)
    {
        printf("---------------------------------------------\n");
        printf("Employee information %d\n",i+1);
        printf("empid id = %d\n", emp[i].empid);
        printf("empid id = %s\n", emp[i].name);
        printf("empid id = %d\n", emp[i].salary);
        printf("empid id = %s\n", emp[i].department);
    }
}