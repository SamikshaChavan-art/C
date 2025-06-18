#include<stdio.h>
int main(){
	int rollno;
	char name[20];
	int sub1, sub2, sub3, total;
	float percentage;
	
	printf("\nEnter Roll no:");
	scanf("%d", &rollno);
	printf("\nEnter Name:");
	scanf("%s", name);
	printf("\nEnter marks:");
	scanf("%d%d%d", &sub1, &sub2, &sub3);
	
	total=sub1+sub2+sub3;
	percentage=(float)total/3.0f;
	
	printf("\n\t|\tStudent Roll No\t|\t\t%d", rollno);
	printf("\n\t|\tStudent Name\t|\t\t%s", name);
	printf("\n\t|\tStudent Marks\t|\t%d\t%d\t%d", sub1, sub2, sub3);
	printf("\n\t|\tStudent Total\t|\t\t%d", total);
	printf("\n\t|\tStudent Percentage\t|\t%.2f", percentage);
	
	
}
