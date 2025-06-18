#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter n:");
    scanf("%d", &n);

    for(i=n; i>0; i--){ //the i loop is reversed here
        for(j=1; j<=i; j++)
        printf("%d", j); //j is used to print the values 
        printf("\n");
    }
}