
#include<stdio.h>
int main(){
	
	int id;
	char name[20];
	int age;
	char gender[20];
	int weight;
	float height;
	float bmi;
	
	printf("\nEnter id:");
	scanf("%d", &id);
	printf("Enter name:");
	scanf("%s", name);
	printf("Enter age:");
	scanf("%d", &age);
	printf("Enter gender:");
	scanf("%s", gender);
	printf("\nEnter Weight in Kg:");
	scanf("%d", &weight);
	printf("\nEnter Height in Meters:");
	scanf("%f", &height);
	
	bmi=weight/(height*height);
	
	printf("\n-------------------------------------------------------");
	printf("\n\t|\tId\t\t %d\t|\t\t", id);
	printf("\n\t|\tName\t\t %s\t|\t", name);
	printf("\n\t|\tAge\t\t %d\t|\t\t", age);
	printf("\n\t|\tGender\t\t %s\t|\t\t", gender);
	printf("\n\t|\tWeight\t\t %d\t|\t\t", weight);
	printf("\n\t|\tHeight\t\t %.2f\t|\t", height);
	printf("\n\t|\tBMI\t\t %.2f\t|\t", bmi);
	printf("\n-------------------------------------------------------");
	
}
