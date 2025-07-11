#include <stdio.h>
struct Student
{
    int rollno;
    char name[10];
    float perc;
};

union Employee
{
    int empid;
    char empname[10];
    int sal;
};

int main()
{
    struct Student stud;
    union Employee emp;

    printf("Sizeof Student %d", sizeof(stud));
    printf("\nSizeof Employee %d", sizeof(emp));

    printf("\nEnter Student Roll No:");
    scanf("%d", &stud.rollno);

    printf("\nEnter Student Name:");
    scanf("%s", &stud.name);

    printf("\nEnter Student Percentage:");
    scanf("%f", &stud.perc);

    printf("\nStudent Roll No is %d \n", stud.rollno);
    printf("Student Name is %s \n", stud.name);
    printf("Student Percentage is %.2f \n", stud.perc);

    printf("\nEnter Employee ID:");
    scanf("%d", &emp.empid);
    printf("\nEmployee ID is %d \n", emp.empid);

    printf("\nEnter Employee Name:");
    scanf("%s", &emp.empname);
    printf("Employee Name is %s \n", emp.empname);

    printf("\nEnter Salary:");
    scanf("%d", &emp.sal);
    printf("Employee Salary is %d \n", emp.sal);
}