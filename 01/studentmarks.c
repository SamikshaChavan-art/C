#include<stdio.h>
int main(){
    int roll_no;
    char name[10];
    int marks1, marks2, marks3;
    int total;
    int percentage;

    printf("\n Enter Roll No:");
    scanf("%d", &roll_no);
    printf("\n Enter Name:");
    scanf("%s", name); //no need to give ampersend for string
    printf("\n Enter Marks:");
    scanf("%d%d%d", &marks1, &marks2, &marks3);

    total=marks1+marks2+marks3;
    percentage=(float)total/3.0f; //Type casting

    printf("\nRoll No:%d",roll_no);
    printf("\nName:%s",name);
    printf("\nMarks:%d%d%d",marks1, marks2, marks3);
    printf("\nTotal:%d",total);
    printf("\nPercentage:%2.f",percentage);


}