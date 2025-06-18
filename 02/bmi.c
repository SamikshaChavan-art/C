//In this program i tried to align the texts in output
#include<stdio.h>
int main(){
    int id;
    char name[20];
    int age;
    char gender[20];
    float weight, height;
    float bmi; //Body Mass Index

    printf("\nEnter Id:");
    scanf("%d", &id);
    printf("\nEnter Name:");
    scanf("%s", name);
    printf("\nEnter age:");
    scanf("%d", &age);
    printf("\nEnter Gender:");
    scanf("%s", gender);
    printf("\nEnter weight in kg:");
    scanf("%f", &weight);
    printf("\nEnter height mtrs:");
    scanf("%f", &height);

    
    bmi=(float)weight/(height*height);

    printf("\n----------------------------------------------------");
    printf("\n\t|\t\tID:\t|\t\t %d\t|\t\t", id);
    printf("\n\t|\t\tName:\t|\t\t %s\t|\t\t", name);
    printf("\n\t|\t\tAge:\t|\t\t %d\t|\t\t", age);
    printf("\n\t|\t\tGender:\t|\t\t %s\t|\t\t", gender);
    printf("\n\t|\t\tWeight:\t|\t\t %f\t|\t\t", weight);
    printf("\n\t|\t\tHeight:\t|\t\t %f\t|\t\t", height);
    printf("\n\t|\t\tBmi:\t|\t\t %f\t|\t\t", bmi);
    printf("\n----------------------------------------------------");
}
