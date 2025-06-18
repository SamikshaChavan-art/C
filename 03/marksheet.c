#include<stdio.h>
int main(){
    int roll_no;
    char name[10];
    int marks1, marks2, marks3;
    int total;
    float percentage;


    FILE *fp;
    fp = fopen("marksheet.txt", "w");

    printf("\n Enter Roll No:  ");
    scanf("%d", &roll_no);
    printf("\n Enter Name:");
    scanf("%s", name); //no need to give ampersend for string
    printf("\n Enter Marks: ");
    scanf("%d%d%d", &marks1, &marks2, &marks3);

    total=marks1+marks2+marks3;
    percentage=total/3; 

    fprintf(fp,"\n-----------------------------------------------------");
    fprintf(fp,"\n|  ID  |  NAME  |  MARKS 1  |  MARKS 2  |  MARKS3  |");
    fprintf(fp,"\n-----------------------------------------------------");
    fprintf(fp,"\n|%6d|%8s|%11d|%11d|%11d|", roll_no, name, marks1, marks2, marks3);
    fprintf(fp,"\n-----------------------------------------------------");
    fprintf(fp,"\n\t\t\tTotal: %d", total);
    fprintf(fp,"\n\t\t\tPercentage: %.2f", percentage);


}