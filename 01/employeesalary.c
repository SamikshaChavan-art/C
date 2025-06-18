//This program tells us the use format specifiers
//Please look at %d and %f carefully otherwise calculations won't happen
#include<stdio.h>
int main(){
   int empid;
   char empname[20];
   int basicsalary;
   float hra, ma, ta, pf, grosssalary;
   
   

   printf("Enter Emp id");
   scanf("%d", &empid);
   printf("Enter Emp Name");
   scanf("%s", empname);
   printf("Enter Emp Salary");
   scanf("%d", &basicsalary);
   
   
   hra=basicsalary*0.4;
   ma=basicsalary*0.07;
   ta=basicsalary*0.09;
   pf=basicsalary*0.06;
   grosssalary=basicsalary+hra+ta+ma-pf;

   printf("\n----------------------------");
   printf("\n\t|\tId of Employee \t|\t%d\t|\t",empid);
   printf("\n\t|\tName of Employee \t|\t%s\t|\t",empname);
   printf("\n\t|\tSalary of Employee \t|\t%d\t|\t",basicsalary);
   printf("\n\t|\tHra\t|\t%f\t|\t", hra);
   printf("\n\t|\tMa\t|\t%f\t|\t", ma);
   printf("\n\t|\tTa\t|\t%f\t|\t", ta);
   printf("\n\t|\tPf\t|\t%f\t|\t", pf);
   printf("\n\t|\tGross Salary\t|\t%f\t|\t", grosssalary);
   printf("\n----------------------------");


}