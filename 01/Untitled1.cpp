#include<stdio.h>
int main(){
	int prodid;
	char name[20];
	int qty, price;
	float cgst, sgst, total, finaltotal;
	
	printf("\n Enter Product ID");
	scanf("%d", &prodid);
	printf("\n Enter Product Name");
	scanf("%s", name);
	printf("\n Enter Product Qty");
	scanf("%d", &qty);
	printf("\n Enter Product Price");
	scanf("%d", &price);
	
	total=qty*price;
	cgst=total*0.12;
	sgst=total*0.12;
	finaltotal=total+cgst+sgst;
	
	
	printf("\n-----------------------------------");
	printf("\n\t|\tProduct ID\t\t%d",prodid);
	printf("\n\t|\tProduct Name\t\t%s",name);
	printf("\n\t|\tProduct Qty\t\t%d",qty);
	printf("\n\t|\tProduct Price\t\t%d",price);
	printf("\n\t|\tProduct Cgst\t\t%f",cgst);
	printf("\n\t|\tProduct Sgst\t\t%f",sgst);
	printf("\n\t|\tProduct Price\t\t%f",finaltotal);
	printf("\n-----------------------------------");
}
