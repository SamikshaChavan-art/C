#include<stdio.h>
int main(){
    int prod_id;
    char prod_name[20];
    int prod_qty, prod_price, total;
    float cgst, sgst, finaltotal;
   

    printf("Enter product id:");
    scanf("%d", &prod_id);
    printf("\nEnter product name:");
    scanf("%s", prod_name);
    printf("\nEnter product qty:");
    scanf("%d", &prod_qty);
    printf("\nEnter product price:");
    scanf("%d", &prod_price);

    total=prod_qty*prod_price;
    cgst=(float)total*0.06;
    sgst=(float)total*0.06;
    finaltotal=total+cgst+sgst;

    printf("--------------------------------");
    printf("\n\t|\tProduct Id \t\t\t%d", prod_id);
    printf("\n\t|\tProduct Name \t\t\t %s", prod_name);
    printf("\n\t|\tProduct Qty \t\t%d", prod_qty);
    printf("\n\t|\tProduct Price \t\t%d", prod_price);
    printf("\n\t|\tCgst \t\t\t%.2f", cgst);
    printf("\n\t|\tSgst \t\t\t%.2f", sgst);
    printf("\n\t|\tFinal Total \t\t%.2f", finaltotal);
    printf("\n--------------------------------");
}
