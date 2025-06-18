//Formatting product bill of three products
#include<stdio.h>
int main(){
    int pid1, pid2, pid3;
    char pname1[100], pname2[100], pname3[100];
    int pprice1, pprice2, pprice3;
    int pqty1, pqty2, pqty3, total;
    float cgst, sgst, finaltotal;

    FILE *fp;
    fp=fopen("bill.txt", "w");

    printf("Enter Details for Product 1:");
    printf("\nID: ");
    scanf("%d", &pid1);
    printf("Name:");
    scanf("%s", pname1);
    printf("Price:");
    scanf("%d", &pprice1);
    printf("Qty:");
    scanf("%d", &pqty1);

    printf("Enter Details for Product 2:");
    printf("\nID: ");
    scanf("%d", &pid2);
    printf("Name:");
    scanf("%s", pname2);
    printf("Price:");
    scanf("%d", &pprice2);
    printf("Qty:");
    scanf("%d", &pqty2);

    printf("Enter Details for Product 3:");
    printf("\nID: ");
    scanf("%d", &pid3);
    printf("Name:");
    scanf("%s", pname3);
    printf("Price:");
    scanf("%d", &pprice3);
    printf("Qty:");
    scanf("%d", &pqty3);
    
    total = (pprice1 * pqty1) + (pprice2 * pqty2) + (pprice3 * pqty3);
    cgst = total * 0.06;
    sgst = total * 0.06;
    finaltotal = total+cgst+sgst;

    fprintf(fp,"\n---------------------------------------------");
    fprintf(fp,"\n|  ID  |  NAME  |  PRICE  |  QTY  |  TOTAL  |");
    fprintf(fp,"\n---------------------------------------------");
    fprintf(fp,"\n|%6d|%8s|%9d|%7d|%9d|", pid1, pname1, pprice1, pqty1, (pprice1*pqty1));
    fprintf(fp,"\n---------------------------------------------");
    fprintf(fp,"\n|%6d|%8s|%9d|%7d|%9d|", pid2, pname2, pprice2, pqty2, (pprice2*pqty2));
    fprintf(fp,"\n---------------------------------------------");
    fprintf(fp,"\n|%6d|%8s|%9d|%7d|%9d|", pid3, pname3, pprice3, pqty3, (pprice3*pqty3));
    fprintf(fp,"\n---------------------------------------------");
    fprintf(fp,"\n\t\t\tTotal          : %d", total);
    fprintf(fp,"\n\t\t\tCGST           : %.2f", cgst);
    fprintf(fp,"\n\t\t\tSGST           : %.2f", sgst);
    fprintf(fp,"\n\t\t\tAmount Payable :%.2f", finaltotal);
    fprintf(fp,"\n---------------------------------------------");
   
}