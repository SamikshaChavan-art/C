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
    float sal;
};

int main()
{
    struct Student stud;
    union Employee emp;
    FILE *fp;

    fp = fopen("E:\\output.txt", "w");
    if (fp == NULL)
    {
        printf("Error Opening file");
        return 1;
    }

    printf("Sizeof Student %d", sizeof(stud));
    printf("\nSizeof Employee %d", sizeof(emp));
    fprintf(fp, "\nSize of Student is %d", sizeof(stud));
    fprintf(fp, "\nSize of employee is %d", sizeof(emp));

    printf("\nEnter Student Roll No:");
    scanf("%d", &stud.rollno);

    printf("\nEnter Student Name:");
    scanf("%s", &stud.name);

    printf("\nEnter Student Percentage:");
    scanf("%f", &stud.perc);

    fprintf(fp,"\nStudent Roll No is %d \n", stud.rollno);
    fprintf(fp,"\nStudent Name is %s \n", stud.name);
    fprintf(fp,"\nStudent Percentage is %.2f \n", stud.perc);

    printf("\nEnter Employee ID:");
    scanf("%d", &emp.empid);
    fprintf(fp,"\nEmployee ID is %d \n", emp.empid);

    printf("\nEnter Employee Name:");
    scanf("%s", &emp.empname);
    fprintf(fp,"\nEmployee Name is %s \n", emp.empname);

    printf("\nEnter Salary:");
    scanf("%d", &emp.sal);
    fprintf(fp,"\nEmployee Salary is %d \n", emp.sal);
}