#include<stdio.h>
struct student{
    int rollno;
    char name[10];
    float perc;
};
int main(){
    struct student stud1;
    printf("Enter Roll No:");
    scanf("%d", &stud1.rollno);
    printf("Enter Name:");
    scanf("%s", stud1.name);
    printf("Enter Percentage:");
    scanf("%f", &stud1.perc);

    printf("\nRoll No is %d", stud1.rollno);
    printf("\nName is %s", stud1.name);
    printf("\nPercentage is %f", stud1.perc);
}