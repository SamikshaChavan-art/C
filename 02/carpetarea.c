#include<stdio.h>
int main(){
    float areaofb,areaofl,areaofbl,areaoft;
    int thickness;
    float carpetarea, builtup;

    printf("Enter area of bedroom");
    scanf("%f", &areaofb);
    printf("\nEnter area of livin room");
    scanf("%f", &areaofl);
    printf("\nEnter area of balcony");
    scanf("%f", &areaofbl);
    printf("\nEnter area of toilet");
    scanf("%f", &areaoft);
    printf("\nEnter area of thickness of the inner walls");
    scanf("%d", &thickness);

    carpetarea=areaofb+areaofl+areaofbl+areaoft-thickness;
    builtup=carpetarea+thickness;
    

    printf("\n\t\t----------------------------------------------\t\t");
	printf("\n\t\tArea of Bedroom:\t\t%f",areaofb);
	printf("\n\t\tArea of living room:\t\t%f",areaofl);
	printf("\n\t\tArea of balcony:\t\t%f",areaofbl);
	printf("\n\t\tArea of Toilet:\t\t\t%f",areaoft);
	printf("\n\t\tArea of Thickness of inner wall:%d",thickness);
    printf("\n\t\tCarpet Area:\t\t%f",carpetarea);
    printf("\n\t\tBuilt up Area:\t\t%f",builtup);
    printf("\n\t\t-----------------------------------------------\t\t"); 


}
