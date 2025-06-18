//In this program i learnt how to dynamically assign space to a output and print the bill in vertical order
//This program does not focus on logic but on formatting 
#include<stdio.h>
int main(){
   int empid;
   char empname[20];
   int basicsalary;
   float hra, ma, ta, pf, grosssalary;
   
   FILE *fp;
   fp = fopen("empsalaryslip.txt", "w");
   

   printf("Enter Emp id: ");
   scanf("%d", &empid);
   printf("Enter Emp Name: ");
   scanf("%s", empname);
   printf("Enter Emp Salary: ");
   scanf("%d", &basicsalary);
   
   
   hra=basicsalary*0.4;
   ma=basicsalary*0.07;
   ta=basicsalary*0.09;
   pf=basicsalary*0.06;
   grosssalary=basicsalary+hra+ta+ma-pf;

   fprintf(fp,"\n----------------------------------------------------------------------");
   fprintf(fp,"\n| ID |  NAME  | SALARY |    HRA    |    MA    |    TA    |    PF    |");
   fprintf(fp,"\n----------------------------------------------------------------------");
   fprintf(fp,"\n|%4d|%8s|%8d|%11f|%10f|%10f|%10f|", empid, empname, basicsalary, hra, ma, ta, pf);
   fprintf(fp,"\n----------------------------------------------------------------------");
   fprintf(fp,"\n\t\t\t\tTotal: %.2f", grosssalary);


}